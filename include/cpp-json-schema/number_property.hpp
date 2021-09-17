#pragma once
#include "property.hpp"
#include "types.hpp"

namespace schema
{
class JsonSchemaNumberProperty : public JsonSchemaProperty
{
  private:
    static constexpr const char *kType = "number";
    static constexpr const char *kKeyMultipleOf = "multipleOf";
    static constexpr const char *kKeyMinimum = "minimum";
    static constexpr const char *kKeyExclusiveMinimum = "exclusiveMinimum";
    static constexpr const char *kKeyMaximum = "maximum";
    static constexpr const char *kKeyExclusiveMaximum = "exclusiveMaximum";

  public:
    static const char *Type();
    using JsonSchemaProperty::JsonSchemaProperty;
    JsonSchemaNumberProperty &setMultipleOf(unsigned int value);
    JsonSchemaNumberProperty &setMinimum(int value);
    JsonSchemaNumberProperty &setExclusiveMinimum(int value);
    JsonSchemaNumberProperty &setMaximum(int value);
    JsonSchemaNumberProperty &setExclusiveMaximum(int value);
};
} // namespace schema
