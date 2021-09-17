#pragma once
#include "property.hpp"
#include "types.hpp"

namespace schema
{

class JsonSchemaStringProperty : public JsonSchemaProperty
{
  private:
    static constexpr const char *kType = "string";

  public:
    static const char *Type();
    using JsonSchemaProperty::JsonSchemaProperty;
};
} // namespace schema
