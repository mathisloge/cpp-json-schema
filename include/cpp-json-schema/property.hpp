#pragma once
#include "types.hpp"
namespace schema
{
class JsonSchemaProperty
{
  protected:
    static constexpr const char *kKeyType = "type";
    static constexpr const char *kKeyDescription = "description";

  public:
    JsonSchemaProperty(schema_json &json);
    JsonSchemaProperty(const JsonSchemaProperty &self);
    ~JsonSchemaProperty();

  protected:
    schema_json &schema_;
};
} // namespace schema
