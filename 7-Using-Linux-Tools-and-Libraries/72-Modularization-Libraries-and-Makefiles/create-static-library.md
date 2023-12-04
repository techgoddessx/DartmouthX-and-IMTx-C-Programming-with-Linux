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

Static libraries include actual function binaries in the executable, making it larger. Dynamic libraries (*.so in Linux) are linked at runtime and result in smaller executable files.

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




