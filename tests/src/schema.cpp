#include <filesystem>
#include <fstream>
#include <sstream>
#include <catch.hpp>

#include "cpp-json-schema/schema.hpp"

using namespace schema;

TEST_CASE("minimal schema", "[schema]")
{
    static constexpr const char *kBaseUrl = "https://example.com/";
    const auto expected_json = R"(
    {
        "$ref":"https://json-schema.org/draft/2020-12/schema",
        "description":"TestDescription",
        "id":"https://example.com/test_schema.json",
        "title":"TestSchema"
    }
    )"_json;

    JsonSchema schema{kBaseUrl, "test_schema.json"};
    schema.setTitle("TestSchema").setDescription("TestDescription");
    REQUIRE(schema.json() == expected_json);
}
