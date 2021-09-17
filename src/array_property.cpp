#include "cpp-json-schema/array_property.hpp"

namespace schema
{
JsonSchemaArrayProperty JsonSchemaArrayProperty::setUniqueItems(bool is_unique)
{
    schema_[kKeyUniqueItems] = is_unique;
    return *this;
}

const char *JsonSchemaArrayProperty::Type()
{
    return kType;
}
} // namespace schema
