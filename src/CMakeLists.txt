add_subdirectory(libs/ci-example/ci-example)

option (BUILD_tests "Build 'tests' application" true)
if(BUILD_tests)
    add_subdirectory(apps/ci-example_tests)
endif()
