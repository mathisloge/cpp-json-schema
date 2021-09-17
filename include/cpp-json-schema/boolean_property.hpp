#pragma once
#include "property.hpp"
#include "types.hpp"

namespace schema
{
class JsonSchemaBooleanProperty : public JsonSchemaProperty
{
  private:
    static constexpr const char *kType = "boolean";

  public:
    using JsonSchemaProperty::JsonSchemaProperty;
    static const char *Type();
};
} // namespace schema
