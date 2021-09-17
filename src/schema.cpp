#include "cpp-json-schema/schema.hpp"
#include <fstream>
namespace schema
{
JsonSchema::JsonSchema(const std::string &base_url, const std::string &id)
    : JsonSchemaProperty{schema_}
    , schema_id_{id}
    , base_url_{base_url}
{
    schema_["$ref"] = "https://json-schema.org/draft/2020-12/schema";
    schema_["id"] = base_url + schema_id_;
}
JsonSchema::~JsonSchema()
{}
void JsonSchema::write(std::ostream &stream)
{
    stream << std::setw(4) << schema_ << std::endl;
}

void JsonSchema::write(const std::filesystem::path &output_dir)
{
    std::ofstream file{output_dir / schema_id_};
    write(file);
}

JsonSchema &JsonSchema::setTitle(const std::string &title)
{
    schema_["title"] = title;
    return *this;
}
JsonSchema &JsonSchema::setDescription(const std::string &description)
{
    schema_["description"] = description;
    return *this;
}

schema_json &JsonSchema::json()
{
    return schema_;
}

} // namespace schema
