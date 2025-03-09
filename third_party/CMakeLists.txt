set(CMAKE_CXX_CLANG_TIDY "" CACHE STRING "" FORCE)  # third party code, disable Clang-Tidy

if (QSLOG_BUILD_TESTS)
    add_subdirectory(googletest-1.16.0)
endif()

if (QSLOG_BUILD_BENCHMARKS)
    add_subdirectory(benchmark-1.9.1)
endif ()
