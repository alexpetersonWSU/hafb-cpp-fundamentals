## C++ Environment in windows
- git           // for source control
- cmake         // to work with project
- g++ (mingw)   // compiler for windows. You need to add binaries to PATH env. variable

## Terminal Commands
```bash
$ ls
$ cd <dest>
$ cd ..
$ pwd
$ rm <name>
```

## File System
```bash
.  # (one dot) present working directory
.. # (two dots) parent directory
```

## C++ Basics
- File extention: `.cpp`

## g++ Compiler for 1 file
```bash
# To compile
# -o for output file name
$ g++ main.cpp -o main
# To run
$ ./main.exe
```

## g++ Compiler for 2 files
For example, if you have a library under the `functions.cpp` and `functions.h` files, and you have a driver under `run_functions.cpp` you need to compile as follows:
```bash
# to compile, list ALL source (cpp) files
# -o for output file name
$ g++ functions.cpp run_functions.cpp -o run_functions
# to run
$ ./run_functions.exe

### C++ File Template
```cpp
#include <iostream>
using namespace std;

int main()
{
    return 0;
}
```

## Plugins and Doxygen documentation
```cpp
// Add the Code Spell Extension
// Add the plugin to VSCode: Doxygen Documentation Generator
```

```cpp
To generate Doxygen documentation
// Run /** and <Enter>
```

### CMake
To build a project we need all the riles to be set  under `CMakeLists.txt` file.
- Create a build folder: `$ mkdir build`
- Go to the build dir: `$ cd build`
- Run cmake: `$ cmake .. -G "MinGW Makefiles"` The `..` is because your CMakeLists.txt is one folder up.
- Build or compile your code: `$ cmake --build .` The `.` means to build it in pwd.