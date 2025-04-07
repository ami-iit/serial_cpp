# `serial_cpp` Serial Communication Library

This is a cross-platform library for interfacing with rs-232 serial like ports written in C++. It provides a modern C++ interface with a workflow designed to look and feel like PySerial, but with the speed and control provided by C++. 

Serial is a class that provides the basic interface common to serial libraries (open, close, read, write, etc..) and requires no extra dependencies. It also provides tight control over timeouts and control over handshaking lines.

`serial_cpp` started as a friendly fork [`wjwwood/serial`](https://github.com/wjwwood/serial), see https://github.com/wjwwood/serial/issues/312 for more details.

> [!NOTE]
> Most projects in the [`ami-iit`](https://github.com/ami-iit) use the dash (`-`) as a separator inside names. This repo makes an exception as it is a derivation of a project originally started in the ROS community, where the use of underscore (`_`) is tipically used, and so the original mantainer asked to keep an underscore, see https://github.com/wjwwood/serial/issues/312#issuecomment-2773775993 .

### Dependencies

Required:
* C++ compiler
* [cmake](http://www.cmake.org) - buildsystem

Optional (for documentation):
* [Doxygen](http://www.doxygen.org/) - Documentation generation tool
* [graphviz](http://www.graphviz.org/) - Graph visualization software

### Example

An example of usage of the library is provided in [`./examples/serial_cpp_example.cxx`](examples/serial_cpp_example.cxx)

### Usage when compiling from source and installing

First compile the project:

~~~bash
git clone https://github.com/ami-iit/serial_cpp.git
cd serial_cpp
cmake -DCMAKE_BUILD_TYPE=Release -Bbuild -S. -DCMAKE_INSTALL_PREFIX=<desired_install_dir>
cmake --build build
cmake --install build
~~~

then, add the following CMake code in your CMake project, where `<target>` is the library or executable
that requires `serial_cpp`:

~~~cmake
find_package(serial_cpp REQUIRED)

target_link_libraries(<target> PRIVATE serial_cpp::serial_cpp)
~~~

### Usage with CMake's FetchContent

If you only need to use `serial_cpp` inside a given CMake project, it make sense to include it via the [CMake's `FetchContent` module](https://cmake.org/cmake/help/latest/module/FetchContent.html):

~~~cmake
include(FetchContent)
FetchContent_Declare(
  serial_cpp
  GIT_REPOSITORY https://github.com/ami-iit/serial_cpp.git
  GIT_TAG        v1.3.2 # or use the tag or commit you prefer
)

FetchContent_MakeAvailable(serial_cpp)

target_link_libraries(<target> PRIVATE serial_cpp::serial_cpp)
~~~

### Development commands

`serial_cpp` is a pure C++ project that can be installed on any system, as long as CMake is available. However, we use [`pixi`](https://pixi.sh) to simplify development, to run the tests (the same run in CI) in pixi, run:

~~~
git clone https://github.com/ami-iit/serial_cpp.git
pixi run test
~~~

### Migration from `wjwwood/serial`

The `serial_cpp` library started as a friendly fork of the [`wjwwood/serial`](https://github.com/wjwwood/serial). To migrate a project from `wjwwood/serial` to `serial_cpp`, the following modifications are needed:

* Change the `#include <serial/serial.h>` inclusion to `#include <serial_cpp/serial.h>`
* Change all `serial::` namespace to `serial_cpp::`

Alternatively, in case you do not want to modify all your code from  `serial::` namespace to `serial_cpp::`, a compatibility header is provided, so that you can simply do the following:

* Change the `#include <serial/serial.h>` inclusion to `#include <serial_cpp/serial_compat.h>`

### License

[The MIT License](LICENSE)

### Mantainers

* Silvio Traversaro ([@traversaro](https://github.com/traversaro))

### Authors

* William Woodall <wjwwood@gmail.com>
* John Harrison <ash.gti@gmail.com>
