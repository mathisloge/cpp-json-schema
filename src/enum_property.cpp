#include "cpp-json-schema/enum_property.hpp"

namespace schema
{
JsonSchemaEnumProperty &JsonSchemaEnumProperty::addValue(const schema_json &value_type)
{
    schema_[kType].emplace_back(value_type);
    return *this;
}

schema_json JsonSchemaEnumProperty::Type()
{
    return nullptr;
}
} // namespace schema
