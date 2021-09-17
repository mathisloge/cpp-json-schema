#pragma once
#include "property.hpp"
#include "types.hpp"

namespace schema
{
class JsonSchemaRefProperty : public JsonSchemaProperty
{
    static constexpr const char *kType = "$ref";

  public:
    JsonSchemaRefProperty &setRef(const std::string &base_url, const std::string &id);
};
} // namespace schema
