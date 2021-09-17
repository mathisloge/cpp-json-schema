#pragma once
#include <filesystem>
#include <string>
#include "array_property.hpp"
#include "boolean_property.hpp"
#include "enum_property.hpp"
#include "integer_property.hpp"
#include "null_property.hpp"
#include "number_property.hpp"
#include "object_property.hpp"
#include "ref_property.hpp"
#include "string_property.hpp"
#include "types.hpp"
namespace schema
{

class JsonSchema final : public JsonSchemaProperty
{
  public:
    explicit JsonSchema(const std::string &base_url, const std::string &id);
    ~JsonSchema();
    void write(const std::filesystem::path &output_dir);

    JsonSchema &setTitle(const std::string &title);
    JsonSchema &setDescription(const std::string &description);

    schema_json &json();

  private:
    const std::string schema_id_;
    const std::string base_url_;
    schema_json schema_;
};
} // namespace schema
