#pragma once
#include "property.hpp"
#include "types.hpp"

namespace schema
{
class JsonSchemaArrayProperty : public JsonSchemaProperty
{
  private:
    static constexpr const char *kType = "array";
    static constexpr const char *kKeyItems = "items";
    static constexpr const char *kKeyItemType = "type";
    static constexpr const char *kKeyUniqueItems = "uniqueItems";

  public:
    static const char *Type();
    using JsonSchemaProperty::JsonSchemaProperty;
    JsonSchemaArrayProperty setUniqueItems(bool is_unique);

    template <typename T>
    T setItemType()
    {
        schema_[kKeyItems][kKeyItemType] = T::Type();
        return T{schema_[kKeyItems][kKeyItemType]};
    }
};
} // namespace schema
