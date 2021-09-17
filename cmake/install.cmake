install(DIRECTORY "${PROJECT_SOURCE_DIR}/include/" TYPE INCLUDE)

install(TARGETS cpp-json-schema
    EXPORT cpp-json-schemaTargets
)

install(EXPORT cpp-json-schemaTargets 
    FILE cpp-json-schemaTargets.cmake
    DESTINATION lib/cmake/cpp-json-schema
)

include(CMakePackageConfigHelpers)
configure_package_config_file(${PROJECT_SOURCE_DIR}/cmake/Config.cmake.in
    ${CMAKE_CURRENT_BINARY_DIR}/cpp-json-schemaConfig.cmake
    INSTALL_DESTINATION lib/cmake/cpp-json-schema
)
write_basic_package_version_file(
    cpp-json-schemaConfigVersion.cmake
    VERSION ${PACKAGE_VERSION}
    COMPATIBILITY AnyNewerVersion
)

install(EXPORT cpp-json-schemaTargets
    FILE cpp-json-schemaTargets.cmake
    NAMESPACE cpp-json-schema::
    DESTINATION lib/cmake/cpp-json-schema
)

install(FILES
    "${CMAKE_CURRENT_BINARY_DIR}/cpp-json-schemaConfig.cmake"
    "${CMAKE_CURRENT_BINARY_DIR}/cpp-json-schemaConfigVersion.cmake"
    DESTINATION lib/cmake/cpp-json-schema
)
