
cmake_minimum_required(VERSION 3.4.1)

project(math)

set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin)

# Creates target,  provides the relative paths to its source code.
add_excutable ( # Sets the name of the target
             test-math

             # Provides a relative path to your source file(s).
             test.cpp )

# Searches for a specified prebuilt library and stores the path as a
# variable. Because CMake includes system libraries in the search path by
# default, you only need to specify the name of the public NDK library
# you want to add. CMake verifies that the library exists before
# completing its build.

find_library( # Sets the name of the path variable.
              log-lib

              # Specifies the name of the NDK library that
              # you want CMake to locate.
              log )

add_library( math-lib
             STATIC
             IMPORTED )

set_target_properties( # Specifies the target library.
                       math-lib

                       # Specifies the parameter you want to define.
                       PROPERTIES IMPORTED_LOCATION

                       # Provides the path to the library you want to import.
                       ../build/libmath.a )

include_directories( ../ )

# Specifies libraries CMake should link to your target. You
# can link multiple libraries, such as libraries you define in this
# build script, prebuilt third-party libraries, or system libraries.

target_link_libraries( # Specifies the target.
                       test-math
                       math-lib
                       # Links the target library to the log library
                       # included in the NDK.
                       # ${log-lib}
                       )