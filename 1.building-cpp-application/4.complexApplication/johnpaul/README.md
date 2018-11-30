# 2. Building a Static Library from the Command Line

### PROBLEM -

To build a static library from a collection of C++ Source Files, listed on this Folder -
1. [john.cpp](https://github.com/dibakarsutradhar/cpp-cookbook/blob/master/1.building-cpp-application/2.staticLibrary/john.cpp)
2. [john.hpp](https://github.com/dibakarsutradhar/cpp-cookbook/blob/master/1.building-cpp-application/2.staticLibrary/john.hpp)
3. [paul.cpp](https://github.com/dibakarsutradhar/cpp-cookbook/blob/master/1.building-cpp-application/2.staticLibrary/paul.cpp)
4. [paul.hpp](https://github.com/dibakarsutradhar/cpp-cookbook/blob/master/1.building-cpp-application/2.staticLibrary/paul.hpp)
5. [johnpaul.cpp](https://github.com/dibakarsutradhar/cpp-cookbook/blob/master/1.building-cpp-application/2.staticLibrary/johnpaul.cpp)
6. [johnpaul.hpp](https://github.com/dibakarsutradhar/cpp-cookbook/blob/master/1.building-cpp-application/2.staticLibrary/johnpaul.hpp)


### MY TAKE ON -

Created the all the files listed above.

Write the commands below on your command prompt to create objects for all the files

```
g++ -c -o john.o john.cpp
g++ -c -o paul.o paul.cpp
g++ -c -o johnpaul.o johnpaul.cpp
```

And after that, first I invoked the archiver using **ar**.
then invoked a tool named **_ranlib_** using **ru**, this tells **ar** to add the given object files to the specified archive if there are no existing archive members with the same name.

```
ar ru libjohnpaul.a john.o paul.o johnpaul.o
```

and it'll solve the problem and will create a static library named **[libjohnpaul.a](https://github.com/dibakarsutradhar/cpp-cookbook/blob/master/1.building-cpp-application/2.staticLibrary/libjohnpaul.a)**