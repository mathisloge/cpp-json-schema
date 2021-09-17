#include "cpp-json-schema/ref_property.hpp"

namespace schema
{
JsonSchemaRefProperty &JsonSchemaRefProperty::setRef(const std::string &base_url, const std::string &id)
{
    schema_[kType] = base_url + id;
    return *this;
}
} // namespace schema
