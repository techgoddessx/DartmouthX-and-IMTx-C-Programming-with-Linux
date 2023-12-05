## Creating a Static Library

**To bundle the .o files into a library, we use the ar command:**

``` ar rcs libweather.a weatherstats.o ```

Now, libweather.a contains the bundled functions.

## Linking Library to Main Program

To create an executable program, link the library to your source code:

``` gcc -o program program.o -L. -lweather ```

Alternatively, you can use:

``` gcc -o program program.o libweather.a ```

## Static vs. Dynamic Libraries

- Static libraries include actual function binaries in the executable, making it larger. Dynamic libraries (*.so in Linux) are linked at runtime and result in smaller executable files because the executable only contains the name of the library, or a link to the library. At runtime, the library is only in existence in one location in memory,and your program links to it.So if multiple programs use the same library, there's only one copy of that library sitting in memory, so also less main memory is used in that case.
- Static libraries have the extension .a (Linux) or .lib (Windows). while Dynamic libraries have the extension .so as in shared object (Linux) or .dll as in dynamic link library (Windows).

## Creating Dynamic Library

To create a dynamic library, use the -shared flag:
  
``` gcc -shared -o libweather.so weatherstats.o ```

## Linking Dynamic Library

Linking to a dynamic library requires setting the library path:
  
```bash
export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:$PWD 
gcc -o program program.o -L. -lweather
```
Remember, these commands assume the library is in the same directory as the executable. Adjust paths accordingly.




