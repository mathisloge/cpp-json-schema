#pragma once
#include "property.hpp"
#include "types.hpp"

namespace schema
{
class JsonSchemaNullProperty : public JsonSchemaProperty
{
  private:
    static constexpr const char *kType = "null";

  public:
    static const char *Type();
    using JsonSchemaProperty::JsonSchemaProperty;
};
} // namespace schema
