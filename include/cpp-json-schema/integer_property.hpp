#pragma once
#include "number_property.hpp"
#include "property.hpp"
#include "types.hpp"

namespace schema
{
class JsonSchemaIntegerProperty : public JsonSchemaNumberProperty
{
  private:
    static constexpr const char *kType = "integer";

  public:
    static const char *Type();
    using JsonSchemaNumberProperty::JsonSchemaNumberProperty;
};
} // namespace schema
