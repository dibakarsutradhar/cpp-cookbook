# 3. Building a Dynamic Library from the Command Line

### PROBLEM -

To build a dynamic library from a collection of C++ Source Files, listed on this Folder -
1. [goerge.cpp](https://github.com/dibakarsutradhar/cpp-cookbook/blob/master/1.building-cpp-application/3.dynamicLibrary/george.cpp)
2. [goerge.hpp](https://github.com/dibakarsutradhar/cpp-cookbook/blob/master/1.building-cpp-application/3.dynamicLibrary/george.hpp)
3. [ringo.cpp](https://github.com/dibakarsutradhar/cpp-cookbook/blob/master/1.building-cpp-application/3.dynamicLibrary/ringo.cpp)
4. [ringo.hpp](https://github.com/dibakarsutradhar/cpp-cookbook/blob/master/1.building-cpp-application/3.dynamicLibrary/ringo.hpp)
5. [goergeringo.cpp](https://github.com/dibakarsutradhar/cpp-cookbook/blob/master/1.building-cpp-application/3.dynamicLibrary/georgeringo.cpp)
6. [goergeringo.hpp](https://github.com/dibakarsutradhar/cpp-cookbook/blob/master/1.building-cpp-application/3.dynamicLibrary/georgeringo.hpp)


### MY TAKE ON -

Created the all the files listed above.

Write the commands below on your command prompt to create objects for all the files

```
g++ -c -o george.o george.cpp
g++ -c -o ringo.o ringo.cpp
```

To define MARCOS I had to use the -D option to ensure that my dynamic library's symbols will be exported to object.
```
g++ -c -DGEORGERINGO_DLL -o georgeringo.o georgeringo.cpp
```
After creating the objects, now it's time to create the dynamic library.
To do that, the linkers requires an option to tell it to build a dynamic library rather than an executable file. Most linkers use the option **'-shared'**. By using **-fPIC** command, told linkers to generate poisition-independent code, followed by the library name and all the objects from the library will be created.

```
g++ -shared -fPIC -o libgeorgeringo.so george.o ringo.o georgeringo.o
```

and it'll solve the problem and will create a dynamic library named **[libgeorgeringo.so](https://github.com/dibakarsutradhar/cpp-cookbook/blob/master/1.building-cpp-application/3.dynamicLibrary/libgeorgeringo.so)**


### DISCUSSION

##### Exporting symbols from a DLL
* Use the **__declspec(dllexport)** attribute in the DLL's headers and build an import library for use when linking code that uses our DLL
    The **__declspec(dllexport)** attribute should be inserted at the beginning of the declarations of exported functions and data, following any linkage specifiers, and immediately following the class or struct keyword for exported class. **__declspec(dllexport)** is not a part of **C++** language; it is a language extension implemented by most Windows Compiler.
