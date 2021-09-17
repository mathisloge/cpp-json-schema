#pragma once
#include "property.hpp"
#include "ref_property.hpp"
#include "types.hpp"

namespace schema
{
class JsonSchemaObjectProperty : public JsonSchemaProperty
{
  private:
    static constexpr const char *kKeyProperties = "properties";
    static constexpr const char *kKeyRequired = "required";
    static constexpr const char *kType = "object";
    static constexpr const char *kAllOf = "allOf";

  public:
    static const char *Type();
    using JsonSchemaProperty::JsonSchemaProperty;
    JsonSchemaObjectProperty &init();

    template <typename T>
    T addProperty(const std::string &name, const std::string &description, bool required)
    {
        auto prop = nlohmann::json::object();
        if (T::Type() != nullptr)
            prop[kKeyType] = T::Type();
        if (!description.empty())
            prop[kKeyDescription] = description;
        if (required)
            schema_[kKeyRequired].emplace_back(name);

        schema_[kKeyProperties][name] = std::move(prop);
        return T{schema_[kKeyProperties][name]};
    }

    template <typename T>
    T addAllOf()
    {
        auto &emplaced = schema_[kAllOf].emplace_back();
        return T{emplaced};
    }
};
} // namespace schema
