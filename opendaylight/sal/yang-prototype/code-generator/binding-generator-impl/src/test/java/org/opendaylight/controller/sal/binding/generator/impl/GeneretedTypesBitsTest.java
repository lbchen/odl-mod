package org.opendaylight.controller.sal.binding.generator.impl;

import static org.junit.Assert.assertTrue;

import java.io.File;
import java.util.ArrayList;
import java.util.List;
import java.util.Set;

import org.junit.Test;
import org.opendaylight.controller.sal.binding.generator.api.BindingGenerator;
import org.opendaylight.controller.sal.binding.model.api.GeneratedProperty;
import org.opendaylight.controller.sal.binding.model.api.GeneratedTransferObject;
import org.opendaylight.controller.sal.binding.model.api.GeneratedType;
import org.opendaylight.controller.sal.binding.model.api.MethodSignature;
import org.opendaylight.controller.sal.binding.model.api.MethodSignature.Parameter;
import org.opendaylight.controller.sal.binding.model.api.Type;
import org.opendaylight.controller.yang.model.api.Module;
import org.opendaylight.controller.yang.model.api.SchemaContext;
import org.opendaylight.controller.yang.model.parser.api.YangModelParser;
import org.opendaylight.controller.yang.parser.impl.YangParserImpl;

public class GeneretedTypesBitsTest {

    private SchemaContext resolveSchemaContextFromFiles(
            final String... yangFiles) {
        final YangModelParser parser = new YangParserImpl();

        final List<File> inputFiles = new ArrayList<File>();
        for (int i = 0; i < yangFiles.length; ++i) {
            inputFiles.add(new File(yangFiles[i]));
        }

        final Set<Module> modules = parser.parseYangModels(inputFiles);
        return parser.resolveSchemaContext(modules);
    }

    @Test
    public void testGeneretedTypesBitsTest() {
        final String yangTypesPath = getClass().getResource(
                "/simple-bits-demo.yang").getPath();

        final SchemaContext context = resolveSchemaContextFromFiles(yangTypesPath);
        assertTrue(context != null);

        final BindingGenerator bindingGen = new BindingGeneratorImpl();
        final List<Type> genTypes = bindingGen.generateTypes(context);
        assertTrue(genTypes != null);

        List<MethodSignature> methodSignaturesList = null;

        boolean leafParentFound = false;

        boolean byteTypeFound = false;
        int classPropertiesNumb = 0;
        int toStringPropertiesNum = 0;
        int equalPropertiesNum = 0;
        int hashPropertiesNum = 0;

        String nameReturnParamType = "";
        String nameMethodeParamType = "";
        boolean getByteLeafMethodFound = false;
        boolean setByteLeafMethodFound = false;
        int setByteLeafMethodParamNum = 0;

        for (final Type type : genTypes) {
            if (type instanceof GeneratedTransferObject) { // searching for
                                                            // ByteType
                final GeneratedTransferObject genTO = (GeneratedTransferObject) type;
                if (genTO.getName().equals("ByteType")) {
                    byteTypeFound = true;
                    List<GeneratedProperty> genProperties = genTO
                            .getProperties();
                    classPropertiesNumb = genProperties.size();

                    genProperties = null;
                    genProperties = genTO.getToStringIdentifiers();
                    toStringPropertiesNum = genProperties.size();

                    genProperties = null;
                    genProperties = genTO.getEqualsIdentifiers();
                    equalPropertiesNum = genProperties.size();

                    genProperties = null;
                    genProperties = genTO.getHashCodeIdentifiers();
                    hashPropertiesNum = genProperties.size();

                }
            } else if (type instanceof GeneratedType) { // searching for
                                                        // interface
                                                        // LeafParameterContainer
                final GeneratedType genType = (GeneratedType) type;
                if (genType.getName().compareTo("LeafParentContainer") == 0) {
                    leafParentFound = true;
                    // check of methods
                    methodSignaturesList = genType.getMethodDefinitions();
                    if (methodSignaturesList != null) {
                        for (MethodSignature methodSignature : methodSignaturesList) { // loop
                                                                                        // through
                                                                                        // all
                                                                                        // methods
                            if (methodSignature.getName().compareTo(
                                    "getByteLeaf") == 0) {
                                getByteLeafMethodFound = true;

                                nameReturnParamType = methodSignature
                                        .getReturnType().getName();
                            } else if (methodSignature.getName().compareTo(
                                    "setByteLeaf") == 0) {
                                setByteLeafMethodFound = true;

                                List<Parameter> parameters = methodSignature
                                        .getParameters();
                                setByteLeafMethodParamNum = parameters.size();
                                for (Parameter parameter : parameters) {
                                    nameMethodeParamType = parameter.getType()
                                            .getName();
                                }

                            }

                        }
                    }
                }
            }

        }

        assertTrue("type >ByteType< wasn't in YANG file", byteTypeFound == true);

        assertTrue("Incorrect number of bit properties in class",
                classPropertiesNumb == 8);

        assertTrue("Incorrect number of properties in toString method",
                toStringPropertiesNum == 8);
        assertTrue("Incorrect number of properties in equals method",
                equalPropertiesNum == 8);
        assertTrue("Incorrect number of properties in hash method",
                hashPropertiesNum == 8);
        assertTrue("LeafParameterContainer container wasn't found",
                leafParentFound == true);

        assertTrue("No methods were generated", methodSignaturesList != null);

        assertTrue("Method getByteLeaf wasn't generated.",
                getByteLeafMethodFound == true);
        assertTrue("Wrong returning parameter type of method getByteLeaf",
                nameReturnParamType.compareTo("ByteType") == 0);

        assertTrue("Method setByteLeaf wasn't generated.",
                setByteLeafMethodFound == true);
        assertTrue("Incorrect number of input parameters for setByteLeaf",
                setByteLeafMethodParamNum == 1);
        assertTrue("Wrong input parameter type",
                nameMethodeParamType.compareTo("ByteType") == 0);

    }

}