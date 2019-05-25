
cmake_minimum_required(VERSION 3.4.1)

project(sample)

# Creates target,  provides the relative paths to its source code.
add_executable ( # Sets the name of the target
             main

             # Provides a relative path to your source file(s).
             main.cpp )

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

# Specifies libraries CMake should link to your target. You
# can link multiple libraries, such as libraries you define in this
# build script, prebuilt third-party libraries, or system libraries.

target_link_libraries( # Specifies the target.
                        main
                       # Links the target library to the log library
                       # included in the NDK.
                       ${log-lib} )