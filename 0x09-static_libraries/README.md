# PROJECT : 0x09. C - Static libraries

###### A static library, also known as an archive, is a collection of object files that are linked together and become a single file that can be linked with other programs. It contains pre-compiled code that can be reused across multiple projects and can significantly reduce the size of the final executable file. The library is designed to be linked at compile-time and is linked directly to the program, which means that all necessary code is included in the executable file. Static libraries are widely used in software development for managing and distributing code.

## Resource

- [What Is A “C” Library? What Is It Good For?](https://docencia.ac.upc.edu/FIB/USO/Bibliografia/unix-c-libraries.html).
- [Creating A Static “C” Library Using “ar” and “ranlib”](https://docencia.ac.upc.edu/FIB/USO/Bibliografia/unix-c-libraries.html).
- [Using A "C" Library In A Program](https://docencia.ac.upc.edu/FIB/USO/Bibliografia/unix-c-libraries.html).
- [What is difference between Dynamic and Static library(Static and Dynamic linking)](https://www.youtube.com/watch?v=eW5he5uFBNM) (stop at 4:44)

### TASKS

[0. A library is not a luxury but one of the necessities of life](libmy.a)


Create the static library libmy.a containing all the functions listed below:


If you haven’t coded all of the above functions create empty ones with the right prototype.


Don’t forget to push  main.h file to your repository. It should  contain all the prototypes of the above functions.

[1. Without libraries what have we? We have no past and no future](create_static_lib.sh)


Create a script called create_static_lib.sh that creates a static library called liball.a from all the .c files that are in the current directory.

### Note: In creating a static library ###

  - gcc -c *.c > This converts .c files to .o (object) files
  - ar rcs libmy.a *.o
  - ar rc libmy.a *.o > This creates the static library "Libmy.a"
  - ar -t libmy.a > This lists all files in libmy.a

- ranlib libmy.a > This converts to random library

  - After creating a static library and you would want to compile for testing use:
  - > gcc -std=gnu89 main.c -L -lmy -o(new_file_name)
