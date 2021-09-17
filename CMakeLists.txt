cmake_minimum_required(VERSION 3.21)
file(READ vcpkg.json VCPKG_MANIFEST_STR)
string(JSON VCPKG_PROJ_VERSION GET ${VCPKG_MANIFEST_STR} "version")
project(cpp-json-schema 
    VERSION ${VCPKG_PROJ_VERSION}
    HOMEPAGE_URL "https://github.com/mathisloge/cpp-json-schema" 
    LANGUAGES CXX
)
list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/cmake/")

option(BUILD_TESTING "build the tests" ON)

find_package(nlohmann_json CONFIG REQUIRED)

add_library(cpp-json-schema STATIC 
    src/array_property.cpp
    src/boolean_property.cpp
    src/enum_property.cpp
    src/integer_property.cpp
    src/null_property.cpp
    src/number_property.cpp
    src/object_property.cpp
    src/property.cpp
    src/ref_property.cpp
    src/schema.cpp
    src/string_property.cpp
)

target_include_directories(cpp-json-schema PUBLIC 
    $<INSTALL_INTERFACE:include>
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<BUILD_INTERFACE:${CMAKE_CURRENT_BINARY_DIR}>
)
target_link_libraries(cpp-json-schema PRIVATE nlohmann_json nlohmann_json::nlohmann_json)
set_target_properties(cpp-json-schema PROPERTIES 
    CXX_EXTENSIONS OFF 
    CXX_STANDARD 20 
    CXX_STANDARD_REQUIRED ON
)


include(CTest)
if(BUILD_TESTING)
    add_subdirectory(tests)
endif()

include(install)
