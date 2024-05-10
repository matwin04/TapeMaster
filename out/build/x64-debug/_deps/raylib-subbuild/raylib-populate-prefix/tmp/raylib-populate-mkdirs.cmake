# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "S:/Projects/TapeMaster/out/build/x64-debug/_deps/raylib-src"
  "S:/Projects/TapeMaster/out/build/x64-debug/_deps/raylib-build"
  "S:/Projects/TapeMaster/out/build/x64-debug/_deps/raylib-subbuild/raylib-populate-prefix"
  "S:/Projects/TapeMaster/out/build/x64-debug/_deps/raylib-subbuild/raylib-populate-prefix/tmp"
  "S:/Projects/TapeMaster/out/build/x64-debug/_deps/raylib-subbuild/raylib-populate-prefix/src/raylib-populate-stamp"
  "S:/Projects/TapeMaster/out/build/x64-debug/_deps/raylib-subbuild/raylib-populate-prefix/src"
  "S:/Projects/TapeMaster/out/build/x64-debug/_deps/raylib-subbuild/raylib-populate-prefix/src/raylib-populate-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "S:/Projects/TapeMaster/out/build/x64-debug/_deps/raylib-subbuild/raylib-populate-prefix/src/raylib-populate-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "S:/Projects/TapeMaster/out/build/x64-debug/_deps/raylib-subbuild/raylib-populate-prefix/src/raylib-populate-stamp${cfgdir}") # cfgdir has leading slash
endif()
