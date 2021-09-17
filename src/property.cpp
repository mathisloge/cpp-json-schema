#include "cpp-json-schema/property.hpp"

namespace schema
{

JsonSchemaProperty::JsonSchemaProperty(schema_json &json)
    : schema_{json}
{}
JsonSchemaProperty::JsonSchemaProperty(const JsonSchemaProperty &self)
    : schema_{self.schema_}
{}
JsonSchemaProperty::~JsonSchemaProperty()
{}
}
