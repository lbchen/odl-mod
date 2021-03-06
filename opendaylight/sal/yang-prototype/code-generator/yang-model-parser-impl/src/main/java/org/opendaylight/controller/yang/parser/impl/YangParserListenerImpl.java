/*
 * Copyright (c) 2013 Cisco Systems, Inc. and others.  All rights reserved.
 *
 * This program and the accompanying materials are made available under the
 * terms of the Eclipse Public License v1.0 which accompanies this distribution,
 * and is available at http://www.eclipse.org/legal/epl-v10.html
 */
package org.opendaylight.controller.yang.parser.impl;

import static org.opendaylight.controller.yang.parser.util.YangModelBuilderUtil.*;

import java.net.URI;
import java.text.DateFormat;
import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.ArrayList;
import java.util.Date;
import java.util.List;
import java.util.Stack;

import org.antlr.v4.runtime.tree.ParseTree;
import org.opendaylight.controller.antlrv4.code.gen.YangParser;
import org.opendaylight.controller.antlrv4.code.gen.YangParser.Argument_stmtContext;
import org.opendaylight.controller.antlrv4.code.gen.YangParser.Base_stmtContext;
import org.opendaylight.controller.antlrv4.code.gen.YangParser.Contact_stmtContext;
import org.opendaylight.controller.antlrv4.code.gen.YangParser.Container_stmtContext;
import org.opendaylight.controller.antlrv4.code.gen.YangParser.Default_stmtContext;
import org.opendaylight.controller.antlrv4.code.gen.YangParser.Description_stmtContext;
import org.opendaylight.controller.antlrv4.code.gen.YangParser.Deviate_add_stmtContext;
import org.opendaylight.controller.antlrv4.code.gen.YangParser.Deviate_delete_stmtContext;
import org.opendaylight.controller.antlrv4.code.gen.YangParser.Deviate_not_supported_stmtContext;
import org.opendaylight.controller.antlrv4.code.gen.YangParser.Deviate_replace_stmtContext;
import org.opendaylight.controller.antlrv4.code.gen.YangParser.Import_stmtContext;
import org.opendaylight.controller.antlrv4.code.gen.YangParser.Key_stmtContext;
import org.opendaylight.controller.antlrv4.code.gen.YangParser.Leaf_list_stmtContext;
import org.opendaylight.controller.antlrv4.code.gen.YangParser.Leaf_stmtContext;
import org.opendaylight.controller.antlrv4.code.gen.YangParser.List_stmtContext;
import org.opendaylight.controller.antlrv4.code.gen.YangParser.Module_header_stmtsContext;
import org.opendaylight.controller.antlrv4.code.gen.YangParser.Namespace_stmtContext;
import org.opendaylight.controller.antlrv4.code.gen.YangParser.Ordered_by_stmtContext;
import org.opendaylight.controller.antlrv4.code.gen.YangParser.Organization_stmtContext;
import org.opendaylight.controller.antlrv4.code.gen.YangParser.Prefix_stmtContext;
import org.opendaylight.controller.antlrv4.code.gen.YangParser.Presence_stmtContext;
import org.opendaylight.controller.antlrv4.code.gen.YangParser.Reference_stmtContext;
import org.opendaylight.controller.antlrv4.code.gen.YangParser.Revision_date_stmtContext;
import org.opendaylight.controller.antlrv4.code.gen.YangParser.Revision_stmtContext;
import org.opendaylight.controller.antlrv4.code.gen.YangParser.Revision_stmtsContext;
import org.opendaylight.controller.antlrv4.code.gen.YangParser.Status_stmtContext;
import org.opendaylight.controller.antlrv4.code.gen.YangParser.Type_body_stmtsContext;
import org.opendaylight.controller.antlrv4.code.gen.YangParser.Units_stmtContext;
import org.opendaylight.controller.antlrv4.code.gen.YangParser.When_stmtContext;
import org.opendaylight.controller.antlrv4.code.gen.YangParser.Yang_version_stmtContext;
import org.opendaylight.controller.antlrv4.code.gen.YangParserBaseListener;
import org.opendaylight.controller.yang.common.QName;
import org.opendaylight.controller.yang.model.api.SchemaPath;
import org.opendaylight.controller.yang.model.api.Status;
import org.opendaylight.controller.yang.model.api.TypeDefinition;
import org.opendaylight.controller.yang.model.util.YangTypesConverter;
import org.opendaylight.controller.yang.parser.builder.api.AugmentationSchemaBuilder;
import org.opendaylight.controller.yang.parser.builder.api.GroupingBuilder;
import org.opendaylight.controller.yang.parser.builder.api.TypeDefinitionBuilder;
import org.opendaylight.controller.yang.parser.builder.api.UsesNodeBuilder;
import org.opendaylight.controller.yang.parser.builder.impl.AnyXmlBuilder;
import org.opendaylight.controller.yang.parser.builder.impl.ChoiceBuilder;
import org.opendaylight.controller.yang.parser.builder.impl.ChoiceCaseBuilder;
import org.opendaylight.controller.yang.parser.builder.impl.ContainerSchemaNodeBuilder;
import org.opendaylight.controller.yang.parser.builder.impl.DeviationBuilder;
import org.opendaylight.controller.yang.parser.builder.impl.ExtensionBuilder;
import org.opendaylight.controller.yang.parser.builder.impl.FeatureBuilder;
import org.opendaylight.controller.yang.parser.builder.impl.IdentitySchemaNodeBuilder;
import org.opendaylight.controller.yang.parser.builder.impl.LeafListSchemaNodeBuilder;
import org.opendaylight.controller.yang.parser.builder.impl.LeafSchemaNodeBuilder;
import org.opendaylight.controller.yang.parser.builder.impl.ListSchemaNodeBuilder;
import org.opendaylight.controller.yang.parser.builder.impl.ModuleBuilder;
import org.opendaylight.controller.yang.parser.builder.impl.NotificationBuilder;
import org.opendaylight.controller.yang.parser.builder.impl.RpcDefinitionBuilder;
import org.opendaylight.controller.yang.parser.builder.impl.UnionTypeBuilder;
import org.opendaylight.controller.yang.parser.builder.impl.UnknownSchemaNodeBuilder;
import org.opendaylight.controller.yang.parser.util.RefineHolder;
import org.slf4j.Logger;
import org.slf4j.LoggerFactory;

public final class YangParserListenerImpl extends YangParserBaseListener {
    private static final Logger logger = LoggerFactory.getLogger(YangParserListenerImpl.class);

    private ModuleBuilder moduleBuilder;
    private String moduleName;
    private URI namespace;
    private String yangModelPrefix;
    private Date revision = new Date(0L);

    public final static DateFormat simpleDateFormat = new SimpleDateFormat("yyyy-MM-dd");
    private final Stack<String> actualPath = new Stack<String>();

    @Override
    public void enterModule_stmt(YangParser.Module_stmtContext ctx) {
        moduleName = stringFromNode(ctx);
        actualPath.push(moduleName);
        moduleBuilder = new ModuleBuilder(moduleName);

        String description = null;
        String reference = null;

        for (int i = 0; i < ctx.getChildCount(); i++) {
            ParseTree child = ctx.getChild(i);
            if (child instanceof Description_stmtContext) {
                description = stringFromNode(child);
            } else if (child instanceof Reference_stmtContext) {
                reference = stringFromNode(child);
            } else {
                if (description != null && reference != null) {
                    break;
                }
            }
        }
        moduleBuilder.setDescription(description);
        moduleBuilder.setReference(reference);
    }

    @Override
    public void exitModule_stmt(YangParser.Module_stmtContext ctx) {
        final String moduleName = actualPath.pop();
        logger.debug("Exiting module " + moduleName);
    }

    @Override
    public void enterModule_header_stmts(final Module_header_stmtsContext ctx) {
        super.enterModule_header_stmts(ctx);

        String yangVersion = null;
        for (int i = 0; i < ctx.getChildCount(); ++i) {
            final ParseTree treeNode = ctx.getChild(i);
            if (treeNode instanceof Namespace_stmtContext) {
                final String namespaceStr = stringFromNode(treeNode);
                namespace = URI.create(namespaceStr);
                moduleBuilder.setNamespace(namespace);
            } else if (treeNode instanceof Prefix_stmtContext) {
                yangModelPrefix = stringFromNode(treeNode);
                moduleBuilder.setPrefix(yangModelPrefix);
            } else if (treeNode instanceof Yang_version_stmtContext) {
                yangVersion = stringFromNode(treeNode);
            }
        }

        if (yangVersion == null) {
            yangVersion = "1";
        }
        moduleBuilder.setYangVersion(yangVersion);
    }

    @Override
    public void enterMeta_stmts(YangParser.Meta_stmtsContext ctx) {
        for (int i = 0; i < ctx.getChildCount(); i++) {
            ParseTree child = ctx.getChild(i);
            if (child instanceof Organization_stmtContext) {
                final String organization = stringFromNode(child);
                moduleBuilder.setOrganization(organization);
            } else if (child instanceof Contact_stmtContext) {
                final String contact = stringFromNode(child);
                moduleBuilder.setContact(contact);
            } else if (child instanceof Description_stmtContext) {
                final String description = stringFromNode(child);
                moduleBuilder.setDescription(description);
            } else if (child instanceof Reference_stmtContext) {
                final String reference = stringFromNode(child);
                moduleBuilder.setReference(reference);
            }
        }
    }

    @Override
    public void exitSubmodule_header_stmts(YangParser.Submodule_header_stmtsContext ctx) {
        final String submodule = actualPath.pop();
        logger.debug("exiting submodule " + submodule);
    }

    @Override
    public void enterRevision_stmts(Revision_stmtsContext ctx) {
        if (ctx != null) {
            for (int i = 0; i < ctx.getChildCount(); ++i) {
                final ParseTree treeNode = ctx.getChild(i);
                if (treeNode instanceof Revision_stmtContext) {
                    updateRevisionForRevisionStatement(treeNode);
                }
            }
        }
    }

    private void updateRevisionForRevisionStatement(final ParseTree treeNode) {
        final String revisionDateStr = stringFromNode(treeNode);
        try {
            final Date revision = simpleDateFormat.parse(revisionDateStr);
            if ((revision != null) && (this.revision.compareTo(revision) < 0)) {
                this.revision = revision;
                moduleBuilder.setRevision(this.revision);
                for (int i = 0; i < treeNode.getChildCount(); ++i) {
                    ParseTree child = treeNode.getChild(i);
                    if (child instanceof Reference_stmtContext) {
                        moduleBuilder.setReference(stringFromNode(child));
                    }
                }
            }
        } catch (ParseException e) {
            final String message = "Failed to parse revision string: " + revisionDateStr;
            logger.warn(message);
        }
    }

    @Override
    public void enterImport_stmt(Import_stmtContext ctx) {
        final String importName = stringFromNode(ctx);
        String importPrefix = null;
        Date importRevision = null;

        for (int i = 0; i < ctx.getChildCount(); ++i) {
            final ParseTree treeNode = ctx.getChild(i);
            if (treeNode instanceof Prefix_stmtContext) {
                importPrefix = stringFromNode(treeNode);
            }
            if (treeNode instanceof Revision_date_stmtContext) {
                String importRevisionStr = stringFromNode(treeNode);
                try {
                    importRevision = simpleDateFormat.parse(importRevisionStr);
                } catch (ParseException e) {
                    logger.warn("Failed to parse import revision-date: " + importRevisionStr);
                }
            }
        }
        moduleBuilder.addModuleImport(importName, importRevision, importPrefix);
    }

    @Override
    public void enterAugment_stmt(YangParser.Augment_stmtContext ctx) {
        final String augmentPath = stringFromNode(ctx);
        AugmentationSchemaBuilder builder = moduleBuilder.addAugment(augmentPath, actualPath, ctx.getStart().getLine());
        moduleBuilder.enterNode(builder);
        updatePath(augmentPath);

        for (int i = 0; i < ctx.getChildCount(); i++) {
            ParseTree child = ctx.getChild(i);
            if (child instanceof Description_stmtContext) {
                String desc = stringFromNode(child);
                builder.setDescription(desc);
            } else if (child instanceof Reference_stmtContext) {
                String ref = stringFromNode(child);
                builder.setReference(ref);
            } else if (child instanceof Status_stmtContext) {
                Status status = parseStatus((Status_stmtContext) child);
                builder.setStatus(status);
            } else if (child instanceof When_stmtContext) {
                String when = stringFromNode(child);
                builder.addWhenCondition(when);
            }
        }
    }

    @Override
    public void exitAugment_stmt(YangParser.Augment_stmtContext ctx) {
        final String augment = actualPath.pop();
        logger.debug("exiting augment " + augment);
        moduleBuilder.exitNode();
    }

    @Override
    public void enterExtension_stmt(YangParser.Extension_stmtContext ctx) {
        final String extName = stringFromNode(ctx);
        QName qname = new QName(namespace, revision, yangModelPrefix, extName);
        ExtensionBuilder builder = moduleBuilder.addExtension(qname, ctx.getStart().getLine());
        parseSchemaNodeArgs(ctx, builder);

        String argument = null;
        boolean yin = false;
        for (int i = 0; i < ctx.getChildCount(); i++) {
            ParseTree child = ctx.getChild(i);
            if (child instanceof Argument_stmtContext) {
                argument = stringFromNode(child);
                yin = parseYinValue((Argument_stmtContext) child);
                break;
            }
        }
        builder.setArgument(argument);
        builder.setYinElement(yin);
    }

    @Override
    public void enterTypedef_stmt(YangParser.Typedef_stmtContext ctx) {
        final String typedefName = stringFromNode(ctx);
        QName typedefQName = new QName(namespace, revision, yangModelPrefix, typedefName);
        TypeDefinitionBuilder builder = moduleBuilder.addTypedef(typedefQName, actualPath, ctx.getStart().getLine());
        moduleBuilder.enterNode(builder);
        updatePath(typedefName);

        builder.setPath(createActualSchemaPath(actualPath, namespace, revision, yangModelPrefix));
        parseSchemaNodeArgs(ctx, builder);
        builder.setUnits(parseUnits(ctx));
    }

    @Override
    public void exitTypedef_stmt(YangParser.Typedef_stmtContext ctx) {
        final String actContainer = actualPath.pop();
        logger.debug("exiting " + actContainer);
        moduleBuilder.exitNode();
    }

    @Override
    public void enterType_stmt(YangParser.Type_stmtContext ctx) {
        final String typeName = stringFromNode(ctx);
        final int line = ctx.getStart().getLine();
        final QName typeQName = parseQName(typeName);

        TypeDefinition<?> type = null;
        Type_body_stmtsContext typeBody = null;
        for (int i = 0; i < ctx.getChildCount(); i++) {
            if (ctx.getChild(i) instanceof Type_body_stmtsContext) {
                typeBody = (Type_body_stmtsContext) ctx.getChild(i);
                break;
            }
        }

        // if this is base yang type...
        if (YangTypesConverter.isBaseYangType(typeName)) {
            if (typeBody == null) {
                // check for types which must have body
                checkMissingBody(typeName, moduleName, line);
                // if there are no constraints, just grab default base yang type
                type = YangTypesConverter.javaTypeForBaseYangType(actualPath, namespace, revision, typeName);
                moduleBuilder.setType(type, actualPath);
            } else {
                if ("union".equals(typeName)) {
                    List<String> typePath = new ArrayList<String>(actualPath);
                    typePath.add(typeName);
                    SchemaPath p = createActualSchemaPath(typePath, namespace, revision, yangModelPrefix);
                    UnionTypeBuilder unionBuilder = moduleBuilder.addUnionType(actualPath, namespace, revision, line);
                    moduleBuilder.enterNode(unionBuilder);
                    unionBuilder.setPath(p);
                } else if ("identityref".equals(typeName)) {
                    SchemaPath path = createActualSchemaPath(actualPath, namespace, revision, yangModelPrefix);
                    moduleBuilder.addIdentityrefType(getIdentityrefBase(typeBody), actualPath, path, line);
                } else {
                    type = parseTypeBody(moduleName, typeName, typeBody, actualPath, namespace, revision,
                            yangModelPrefix, moduleBuilder.getActualNode());
                    moduleBuilder.setType(type, actualPath);
                }
            }
        } else {
            type = parseUnknownTypeBody(typeQName, typeBody, actualPath, namespace, revision, yangModelPrefix,
                    moduleBuilder.getActualNode(), moduleBuilder);
            // mark parent node of this type statement as dirty
            moduleBuilder.addDirtyNode(actualPath);
            moduleBuilder.setType(type, actualPath);
        }

        updatePath(typeName);
    }

    private QName parseQName(String typeName) {
        QName typeQName;
        if (typeName.contains(":")) {
            String[] splittedName = typeName.split(":");
            String prefix = splittedName[0];
            String name = splittedName[1];
            if (prefix.equals(yangModelPrefix)) {
                typeQName = new QName(namespace, revision, prefix, name);
            } else {
                typeQName = new QName(null, null, prefix, name);
            }
        } else {
            typeQName = new QName(namespace, revision, yangModelPrefix, typeName);
        }
        return typeQName;
    }

    @Override
    public void exitType_stmt(YangParser.Type_stmtContext ctx) {
        final String actContainer = actualPath.pop();
        logger.debug("exiting " + actContainer);

        final String typeName = stringFromNode(ctx);
        if ("union".equals(typeName)) {
            moduleBuilder.exitNode();
        }
    }

    @Override
    public void enterGrouping_stmt(YangParser.Grouping_stmtContext ctx) {
        final String groupName = stringFromNode(ctx);
        QName groupQName = new QName(namespace, revision, yangModelPrefix, groupName);
        GroupingBuilder builder = moduleBuilder.addGrouping(groupQName, actualPath, ctx.getStart().getLine());
        moduleBuilder.enterNode(builder);
        updatePath(groupName);
        builder.setPath(createActualSchemaPath(actualPath, namespace, revision, yangModelPrefix));
        parseSchemaNodeArgs(ctx, builder);
    }

    @Override
    public void exitGrouping_stmt(YangParser.Grouping_stmtContext ctx) {
        String actContainer = actualPath.pop();
        logger.debug("exiting " + actContainer);
        moduleBuilder.exitNode();
    }

    @Override
    public void enterContainer_stmt(Container_stmtContext ctx) {
        final String containerName = stringFromNode(ctx);
        QName containerQName = new QName(namespace, revision, yangModelPrefix, containerName);
        ContainerSchemaNodeBuilder builder = moduleBuilder.addContainerNode(containerQName, actualPath, ctx.getStart()
                .getLine());
        moduleBuilder.enterNode(builder);
        updatePath(containerName);

        builder.setPath(createActualSchemaPath(actualPath, namespace, revision, yangModelPrefix));
        parseSchemaNodeArgs(ctx, builder);
        parseConstraints(ctx, builder.getConstraints());

        for (int i = 0; i < ctx.getChildCount(); ++i) {
            final ParseTree childNode = ctx.getChild(i);
            if (childNode instanceof Presence_stmtContext) {
                builder.setPresence(true);
                break;
            }
        }
    }

    @Override
    public void exitContainer_stmt(Container_stmtContext ctx) {
        final String actContainer = actualPath.pop();
        logger.debug("exiting " + actContainer);
        moduleBuilder.exitNode();
    }

    @Override
    public void enterLeaf_stmt(Leaf_stmtContext ctx) {
        final String leafName = stringFromNode(ctx);
        QName leafQName = new QName(namespace, revision, yangModelPrefix, leafName);
        LeafSchemaNodeBuilder builder = moduleBuilder.addLeafNode(leafQName, actualPath, ctx.getStart().getLine());
        moduleBuilder.enterNode(builder);
        updatePath(leafName);

        builder.setPath(createActualSchemaPath(actualPath, namespace, revision, yangModelPrefix));
        parseSchemaNodeArgs(ctx, builder);
        parseConstraints(ctx, builder.getConstraints());

        String defaultStr = null;
        String unitsStr = null;
        for (int i = 0; i < ctx.getChildCount(); i++) {
            ParseTree child = ctx.getChild(i);
            if (child instanceof Default_stmtContext) {
                defaultStr = stringFromNode(child);
            } else if (child instanceof Units_stmtContext) {
                unitsStr = stringFromNode(child);
            }
        }
        builder.setDefaultStr(defaultStr);
        builder.setUnits(unitsStr);
    }

    @Override
    public void exitLeaf_stmt(YangParser.Leaf_stmtContext ctx) {
        final String actLeaf = actualPath.pop();
        logger.debug("exiting " + actLeaf);
        moduleBuilder.exitNode();
    }

    @Override
    public void enterUses_stmt(YangParser.Uses_stmtContext ctx) {
        final String groupingPathStr = stringFromNode(ctx);
        UsesNodeBuilder builder = moduleBuilder.addUsesNode(groupingPathStr, actualPath, ctx.getStart().getLine());

        moduleBuilder.enterNode(builder);
        updatePath(groupingPathStr);
        builder.setPath(createActualSchemaPath(actualPath, namespace, revision, yangModelPrefix));
    }

    @Override
    public void exitUses_stmt(YangParser.Uses_stmtContext ctx) {
        final String actContainer = actualPath.pop();
        logger.debug("exiting " + actContainer);
        moduleBuilder.exitNode();
    }

    @Override
    public void enterRefine_stmt(YangParser.Refine_stmtContext ctx) {
        String refineString = stringFromNode(ctx);
        RefineHolder refine = parseRefine(ctx);
        moduleBuilder.addRefine(refine, actualPath);
        moduleBuilder.enterNode(refine);
        updatePath(refineString);
    }

    @Override
    public void exitRefine_stmt(YangParser.Refine_stmtContext ctx) {
        final String actContainer = actualPath.pop();
        logger.debug("exiting " + actContainer);
        moduleBuilder.exitNode();
    }

    @Override
    public void enterLeaf_list_stmt(Leaf_list_stmtContext ctx) {
        final String leafListName = stringFromNode(ctx);
        QName leafListQName = new QName(namespace, revision, yangModelPrefix, leafListName);
        LeafListSchemaNodeBuilder builder = moduleBuilder.addLeafListNode(leafListQName, actualPath, ctx.getStart()
                .getLine());
        moduleBuilder.enterNode(builder);
        updatePath(leafListName);

        builder.setPath(createActualSchemaPath(actualPath, namespace, revision, yangModelPrefix));
        parseSchemaNodeArgs(ctx, builder);
        parseConstraints(ctx, builder.getConstraints());

        for (int i = 0; i < ctx.getChildCount(); ++i) {
            final ParseTree childNode = ctx.getChild(i);
            if (childNode instanceof Ordered_by_stmtContext) {
                final Ordered_by_stmtContext orderedBy = (Ordered_by_stmtContext) childNode;
                final boolean userOrdered = parseUserOrdered(orderedBy);
                builder.setUserOrdered(userOrdered);
                break;
            }
        }
    }

    @Override
    public void exitLeaf_list_stmt(YangParser.Leaf_list_stmtContext ctx) {
        final String actContainer = actualPath.pop();
        logger.debug("exiting " + actContainer);
        moduleBuilder.exitNode();
    }

    @Override
    public void enterList_stmt(List_stmtContext ctx) {
        final String containerName = stringFromNode(ctx);
        QName containerQName = new QName(namespace, revision, yangModelPrefix, containerName);
        ListSchemaNodeBuilder builder = moduleBuilder.addListNode(containerQName, actualPath, ctx.getStart().getLine());
        moduleBuilder.enterNode(builder);
        updatePath(containerName);

        builder.setPath(createActualSchemaPath(actualPath, namespace, revision, yangModelPrefix));
        parseSchemaNodeArgs(ctx, builder);
        parseConstraints(ctx, builder.getConstraints());

        String keyDefinition = "";
        for (int i = 0; i < ctx.getChildCount(); ++i) {
            ParseTree childNode = ctx.getChild(i);
            if (childNode instanceof Ordered_by_stmtContext) {
                final Ordered_by_stmtContext orderedBy = (Ordered_by_stmtContext) childNode;
                final boolean userOrdered = parseUserOrdered(orderedBy);
                builder.setUserOrdered(userOrdered);
            } else if (childNode instanceof Key_stmtContext) {
                keyDefinition = stringFromNode(childNode);
                List<QName> key = createListKey(keyDefinition, namespace, revision, yangModelPrefix);
                builder.setKeyDefinition(key);
            }
        }
    }

    @Override
    public void exitList_stmt(List_stmtContext ctx) {
        final String actContainer = actualPath.pop();
        logger.debug("exiting " + actContainer);
        moduleBuilder.exitNode();
    }

    @Override
    public void enterAnyxml_stmt(YangParser.Anyxml_stmtContext ctx) {
        final String anyXmlName = stringFromNode(ctx);
        QName anyXmlQName = new QName(namespace, revision, yangModelPrefix, anyXmlName);
        AnyXmlBuilder builder = moduleBuilder.addAnyXml(anyXmlQName, actualPath, ctx.getStart().getLine());
        moduleBuilder.enterNode(builder);
        updatePath(anyXmlName);

        builder.setPath(createActualSchemaPath(actualPath, namespace, revision, yangModelPrefix));
        parseSchemaNodeArgs(ctx, builder);
        parseConstraints(ctx, builder.getConstraints());
    }

    @Override
    public void exitAnyxml_stmt(YangParser.Anyxml_stmtContext ctx) {
        final String actContainer = actualPath.pop();
        logger.debug("exiting " + actContainer);
        moduleBuilder.exitNode();
    }

    @Override
    public void enterChoice_stmt(YangParser.Choice_stmtContext ctx) {
        final String choiceName = stringFromNode(ctx);
        QName choiceQName = new QName(namespace, revision, yangModelPrefix, choiceName);
        ChoiceBuilder builder = moduleBuilder.addChoice(choiceQName, actualPath, ctx.getStart().getLine());
        moduleBuilder.enterNode(builder);

        updatePath(choiceName);
        builder.setPath(createActualSchemaPath(actualPath, namespace, revision, yangModelPrefix));
        parseSchemaNodeArgs(ctx, builder);
        parseConstraints(ctx, builder.getConstraints());

        // set 'default' case
        for (int i = 0; i < ctx.getChildCount(); i++) {
            ParseTree child = ctx.getChild(i);
            if (child instanceof Default_stmtContext) {
                String defaultCase = stringFromNode(child);
                builder.setDefaultCase(defaultCase);
                break;
            }
        }
    }

    @Override
    public void exitChoice_stmt(YangParser.Choice_stmtContext ctx) {
        final String actContainer = actualPath.pop();
        logger.debug("exiting " + actContainer);
        moduleBuilder.exitNode();
    }

    @Override
    public void enterCase_stmt(YangParser.Case_stmtContext ctx) {
        final String caseName = stringFromNode(ctx);
        QName choiceQName = new QName(namespace, revision, yangModelPrefix, caseName);
        ChoiceCaseBuilder builder = moduleBuilder.addCase(choiceQName, actualPath, ctx.getStart().getLine());
        moduleBuilder.enterNode(builder);

        updatePath(caseName);
        builder.setPath(createActualSchemaPath(actualPath, namespace, revision, yangModelPrefix));
        parseSchemaNodeArgs(ctx, builder);
        parseConstraints(ctx, builder.getConstraints());
    }

    @Override
    public void exitCase_stmt(YangParser.Case_stmtContext ctx) {
        final String actContainer = actualPath.pop();
        logger.debug("exiting " + actContainer);
        moduleBuilder.exitNode();
    }

    @Override
    public void enterNotification_stmt(YangParser.Notification_stmtContext ctx) {
        final String notificationName = stringFromNode(ctx);
        QName notificationQName = new QName(namespace, revision, yangModelPrefix, notificationName);
        NotificationBuilder builder = moduleBuilder.addNotification(notificationQName, actualPath, ctx.getStart()
                .getLine());
        moduleBuilder.enterNode(builder);
        updatePath(notificationName);

        builder.setPath(createActualSchemaPath(actualPath, namespace, revision, yangModelPrefix));
        parseSchemaNodeArgs(ctx, builder);
    }

    @Override
    public void exitNotification_stmt(YangParser.Notification_stmtContext ctx) {
        final String actContainer = actualPath.pop();
        logger.debug("exiting " + actContainer);
        moduleBuilder.exitNode();
    }

    // Unknown types
    @Override
    public void enterIdentifier_stmt(YangParser.Identifier_stmtContext ctx) {
        final String nodeParameter = stringFromNode(ctx);
        QName nodeType = null;

        final String nodeTypeStr = ctx.getChild(0).getText();
        final String[] splittedElement = nodeTypeStr.split(":");
        if (splittedElement.length == 1) {
            nodeType = new QName(null, null, yangModelPrefix, splittedElement[0]);
        } else {
            nodeType = new QName(null, null, splittedElement[0], splittedElement[1]);
        }

        QName qname;
        if (nodeParameter != null) {
            String[] splittedName = nodeParameter.split(":");
            if (splittedName.length == 2) {
                qname = new QName(null, null, splittedName[0], splittedName[1]);
            } else {
                qname = new QName(namespace, revision, yangModelPrefix, splittedName[0]);
            }
        } else {
            qname = new QName(namespace, revision, yangModelPrefix, nodeParameter);
        }

        UnknownSchemaNodeBuilder builder = moduleBuilder.addUnknownSchemaNode(qname, actualPath, ctx.getStart()
                .getLine());
        builder.setNodeType(nodeType);
        builder.setNodeParameter(nodeParameter);
        updatePath(nodeParameter);
        builder.setPath(createActualSchemaPath(actualPath, namespace, revision, yangModelPrefix));
        parseSchemaNodeArgs(ctx, builder);
        moduleBuilder.enterNode(builder);
    }

    @Override
    public void exitIdentifier_stmt(YangParser.Identifier_stmtContext ctx) {
        final String actContainer = actualPath.pop();
        logger.debug("exiting " + actContainer);
        moduleBuilder.exitNode();
    }

    @Override
    public void enterRpc_stmt(YangParser.Rpc_stmtContext ctx) {
        final String rpcName = stringFromNode(ctx);
        QName rpcQName = new QName(namespace, revision, yangModelPrefix, rpcName);
        RpcDefinitionBuilder rpcBuilder = moduleBuilder.addRpc(rpcQName, actualPath, ctx.getStart().getLine());
        moduleBuilder.enterNode(rpcBuilder);
        updatePath(rpcName);

        rpcBuilder.setPath(createActualSchemaPath(actualPath, namespace, revision, yangModelPrefix));
        parseSchemaNodeArgs(ctx, rpcBuilder);
    }

    @Override
    public void exitRpc_stmt(YangParser.Rpc_stmtContext ctx) {
        final String actContainer = actualPath.pop();
        logger.debug("exiting " + actContainer);
        moduleBuilder.exitNode();
    }

    @Override
    public void enterInput_stmt(YangParser.Input_stmtContext ctx) {
        final String input = "input";
        QName rpcQName = new QName(namespace, revision, yangModelPrefix, input);
        ContainerSchemaNodeBuilder builder = moduleBuilder.addRpcInput(rpcQName, ctx.getStart().getLine());
        moduleBuilder.enterNode(builder);
        updatePath(input);

        builder.setPath(createActualSchemaPath(actualPath, namespace, revision, yangModelPrefix));
        parseSchemaNodeArgs(ctx, builder);
        parseConstraints(ctx, builder.getConstraints());
    }

    @Override
    public void exitInput_stmt(YangParser.Input_stmtContext ctx) {
        final String actContainer = actualPath.pop();
        logger.debug("exiting " + actContainer);
        moduleBuilder.exitNode();
    }

    @Override
    public void enterOutput_stmt(YangParser.Output_stmtContext ctx) {
        final String output = "output";
        QName rpcQName = new QName(namespace, revision, yangModelPrefix, output);
        ContainerSchemaNodeBuilder builder = moduleBuilder.addRpcOutput(rpcQName, ctx.getStart().getLine());
        moduleBuilder.enterNode(builder);
        updatePath(output);

        builder.setPath(createActualSchemaPath(actualPath, namespace, revision, yangModelPrefix));
        parseSchemaNodeArgs(ctx, builder);
        parseConstraints(ctx, builder.getConstraints());
    }

    @Override
    public void exitOutput_stmt(YangParser.Output_stmtContext ctx) {
        final String actContainer = actualPath.pop();
        logger.debug("exiting " + actContainer);
        moduleBuilder.exitNode();
    }

    @Override
    public void enterFeature_stmt(YangParser.Feature_stmtContext ctx) {
        final String featureName = stringFromNode(ctx);
        QName featureQName = new QName(namespace, revision, yangModelPrefix, featureName);
        FeatureBuilder featureBuilder = moduleBuilder.addFeature(featureQName, actualPath, ctx.getStart().getLine());
        moduleBuilder.enterNode(featureBuilder);
        updatePath(featureName);

        featureBuilder.setPath(createActualSchemaPath(actualPath, namespace, revision, yangModelPrefix));
        parseSchemaNodeArgs(ctx, featureBuilder);
    }

    @Override
    public void exitFeature_stmt(YangParser.Feature_stmtContext ctx) {
        final String actContainer = actualPath.pop();
        logger.debug("exiting " + actContainer);
        moduleBuilder.exitNode();
    }

    @Override
    public void enterDeviation_stmt(YangParser.Deviation_stmtContext ctx) {
        final String targetPath = stringFromNode(ctx);
        String reference = null;
        String deviate = null;
        DeviationBuilder builder = moduleBuilder.addDeviation(targetPath, actualPath, ctx.getStart().getLine());
        moduleBuilder.enterNode(builder);
        updatePath(targetPath);

        for (int i = 0; i < ctx.getChildCount(); i++) {
            ParseTree child = ctx.getChild(i);
            if (child instanceof Reference_stmtContext) {
                reference = stringFromNode(child);
            } else if (child instanceof Deviate_not_supported_stmtContext) {
                deviate = stringFromNode(child);
            } else if (child instanceof Deviate_add_stmtContext) {
                deviate = stringFromNode(child);
            } else if (child instanceof Deviate_replace_stmtContext) {
                deviate = stringFromNode(child);
            } else if (child instanceof Deviate_delete_stmtContext) {
                deviate = stringFromNode(child);
            }
        }
        builder.setReference(reference);
        builder.setDeviate(deviate);
    }

    @Override
    public void exitDeviation_stmt(YangParser.Deviation_stmtContext ctx) {
        final String actContainer = actualPath.pop();
        logger.debug("exiting " + actContainer);
        moduleBuilder.exitNode();
    }

    @Override
    public void enterConfig_stmt(YangParser.Config_stmtContext ctx) {
        boolean configuration = parseConfig(ctx);
        moduleBuilder.addConfiguration(configuration, actualPath, ctx.getStart().getLine());
    }

    @Override
    public void enterIdentity_stmt(YangParser.Identity_stmtContext ctx) {
        final String identityName = stringFromNode(ctx);
        final QName identityQName = new QName(namespace, revision, yangModelPrefix, identityName);
        IdentitySchemaNodeBuilder builder = moduleBuilder.addIdentity(identityQName, actualPath, ctx.getStart()
                .getLine());
        moduleBuilder.enterNode(builder);
        updatePath(identityName);

        builder.setPath(createActualSchemaPath(actualPath, namespace, revision, yangModelPrefix));
        parseSchemaNodeArgs(ctx, builder);

        for (int i = 0; i < ctx.getChildCount(); i++) {
            ParseTree child = ctx.getChild(i);
            if (child instanceof Base_stmtContext) {
                String baseIdentityName = stringFromNode(child);
                builder.setBaseIdentityName(baseIdentityName);
            }
        }
    }

    @Override
    public void exitIdentity_stmt(YangParser.Identity_stmtContext ctx) {
        final String actContainer = actualPath.pop();
        logger.debug("exiting " + actContainer);
        moduleBuilder.exitNode();
    }

    public ModuleBuilder getModuleBuilder() {
        return moduleBuilder;
    }

    private void updatePath(String containerName) {
        actualPath.push(containerName);
    }

}
