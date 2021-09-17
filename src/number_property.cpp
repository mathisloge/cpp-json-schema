#include "cpp-json-schema/number_property.hpp"

namespace schema
{
JsonSchemaNumberProperty &JsonSchemaNumberProperty::setMultipleOf(unsigned int value)
{
    schema_[kKeyMultipleOf] = value;
    return *this;
}
JsonSchemaNumberProperty &JsonSchemaNumberProperty::setMinimum(int value)
{
    schema_[kKeyMinimum] = value;
    return *this;
}
JsonSchemaNumberProperty &JsonSchemaNumberProperty::setExclusiveMinimum(int value)
{
    schema_[kKeyExclusiveMinimum] = value;
    return *this;
}
JsonSchemaNumberProperty &JsonSchemaNumberProperty::setMaximum(int value)
{
    schema_[kKeyMaximum] = value;
    return *this;
}
JsonSchemaNumberProperty &JsonSchemaNumberProperty::setExclusiveMaximum(int value)
{
    schema_[kKeyExclusiveMaximum] = value;
    return *this;
}

const char *JsonSchemaNumberProperty::Type()
{
    return kType;
}
} // namespace schema
