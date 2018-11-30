# 4. Building a Complex Application from the Command Line

### PROBLEM -

To use the command-line tools to build an executable that depends on several static and dynamic libraries.


### MY TAKE ON -

For static library - copied previous solution from **[2.staticLibrary]()** to current directory as **[johnpaul](https://github.com/dibakarsutradhar/cpp-cookbook/tree/master/1.building-cpp-application/4.complexApplication/johnpaul)**
For dynamic library - copied previous solution from **[3.dynamicLibrary]()** to current directory as **[georgeringo](https://github.com/dibakarsutradhar/cpp-cookbook/tree/master/1.building-cpp-application/4.complexApplication/georgeringo)**

Created a new .cpp file named **[hellobeatles.cpp](https://github.com/dibakarsutradhar/cpp-cookbook/blob/master/1.building-cpp-application/4.complexApplication/hellobeatles.cpp)** -

```cpp
#include "johnpaul/johnpaul.hpp"
#include "georgeringo/georgeringo.hpp"

int main() {
    // prints "John, Paul, George, and Ringo\n
    johnpaul();
    georgeringo();
}
```
Compiled **hellobeatles.cpp** file to object file using command line -

```
g++ -c -o hellobeatles.o hellobeatles.cpp
```

Now to create the executable file, write these commands -

```
g++ -o hellobeatles hellobeatles.o ./johnpaul/libjohnpaul.a ./georgeringo/libgeorgeringo.so
```

and it'll solve the problem and will create a Complex Application named **[hellobeatles.exe](https://github.com/dibakarsutradhar/cpp-cookbook/blob/master/1.building-cpp-application/4.complexApplication/hellobeatles.exe)**


### RUN THIS FILE INTO YOUR SYSTEM
* Download the whole directory
* Open your Command Line Tool
* Use `cd` to go to the **4.complexApplication** directory
* Type `hellobeatles.exe` in command line and hit ENTER
* It'll print `John, Paul, George, and Ringo`.



### PROBLEMS

While creating this exe file, I ran into a problem. I couldn't able to find the **georgeringo.so** library from the command line. As a result, the exe file wasn't starting and throwing an error. So to solve this, I copied the dynamic library and pasted in to the main directory and the application is now working fine. Googled this method and found that it's some sort of standard things to do.