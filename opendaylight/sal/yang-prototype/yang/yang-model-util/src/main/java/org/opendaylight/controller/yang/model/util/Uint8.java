/*
 * Copyright (c) 2013 Cisco Systems, Inc. and others.  All rights reserved.
 *
 * This program and the accompanying materials are made available under the
 * terms of the Eclipse Public License v1.0 which accompanies this distribution,
 * and is available at http://www.eclipse.org/legal/epl-v10.html
 */
package org.opendaylight.controller.yang.model.util;

import org.opendaylight.controller.yang.common.QName;
import org.opendaylight.controller.yang.model.api.SchemaPath;
import org.opendaylight.controller.yang.model.api.type.UnsignedIntegerTypeDefinition;

/**
 * Implementation of Yang uint8 built-in type. <br>
 * uint8 represents integer values between 0 and 255, inclusively.
 *
 * @see AbstractUnsignedInteger
 */
public final class Uint8 extends AbstractUnsignedInteger {
    public static final int MAX_VALUE = 255;
    private static final QName name = BaseTypes.constructQName("uint8");
    private final Short defaultValue = null;
    private static final String description = "uint8  represents integer values between 0 and 255, inclusively.";
    private final UnsignedIntegerTypeDefinition baseType;

    public Uint8(final SchemaPath path) {
        super(path, name, description, MAX_VALUE, "");
        this.baseType = this;
    }

    /*
     * (non-Javadoc)
     *
     * @see
     * org.opendaylight.controller.yang.model.api.TypeDefinition#getBaseType()
     */
    @Override
    public UnsignedIntegerTypeDefinition getBaseType() {
        return baseType;
    }

    /*
     * (non-Javadoc)
     *
     * @see
     * org.opendaylight.controller.yang.model.api.TypeDefinition#getDefaultValue
     * ()
     */
    @Override
    public Object getDefaultValue() {
        return defaultValue;
    }

    @Override
    public int hashCode() {
        final int prime = 31;
        int result = super.hashCode();
        result = prime * result + ((defaultValue == null) ? 0 : defaultValue.hashCode());
        return result;
    }

    @Override
    public boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!super.equals(obj)) {
            return false;
        }
        if (getClass() != obj.getClass()) {
            return false;
        }
        Uint8 other = (Uint8) obj;
        if (defaultValue == null) {
            if (other.defaultValue != null) {
                return false;
            }
        } else if (!defaultValue.equals(other.defaultValue)) {
            return false;
        }
        return true;
    }

    @Override
    public String toString() {
        StringBuilder builder = new StringBuilder();
        builder.append("Uint8 [defaultValue=");
        builder.append(defaultValue);
        builder.append(", AbstractInteger=");
        builder.append(super.toString());
        builder.append("]");
        return builder.toString();
    }

}
