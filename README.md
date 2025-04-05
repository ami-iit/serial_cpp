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

### Usage compiling from source

First compile the project:

~~~bash
git clone https://github.com/ami-iit/serial_cpp.git
cd serial_cpp
cmake -DCMAKE_BUILD_TYPE=Release -Bbuild -S. -DCMAKE_INSTALL_PREFIX=<desired_install_dir>
cmake --build build
cmake --install build
~~~

### Development commands

`serial_cpp` is a pure C++ project that can be installed on any system, as long as CMake is available. However, we use [`pixi`](https://pixi.sh) to simplify development, to run the tests (the same run in CI) in pixi, run:

~~~
git clone https://github.com/ami-iit/serial_cpp.git
pixi run test
~~~

### License

[The MIT License](LICENSE)

### Mantainers

* Silvio Traversaro ([@traversaro](https://github.com/traversaro))

### Authors

* William Woodall <wjwwood@gmail.com>
* John Harrison <ash.gti@gmail.com>
