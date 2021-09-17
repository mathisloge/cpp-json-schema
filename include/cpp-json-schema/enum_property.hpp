#pragma once
#include "property.hpp"
#include "types.hpp"

namespace schema
{
class JsonSchemaEnumProperty : public JsonSchemaProperty
{
  private:
    static constexpr const char *kType = "enum";

  public:
    static schema_json Type();
    using JsonSchemaProperty::JsonSchemaProperty;
    JsonSchemaEnumProperty &addValue(const schema_json &value_type);
};

} // namespace schema
