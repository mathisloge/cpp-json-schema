#include "cpp-json-schema/object_property.hpp"

namespace schema
{
JsonSchemaObjectProperty &JsonSchemaObjectProperty::init()
{
    schema_[kKeyType] = Type();
    return *this;
}

const char *JsonSchemaObjectProperty::Type()
{
    return kType;
}
} // namespace schema
