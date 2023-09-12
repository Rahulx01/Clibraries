# Clibraries

When you compile a C program, the compiler does two important things:

Object Code Generation:

The compiler converts your C code into a special format called "object code." Each source file you have in your program gets turned into a separate object file (with a .o extension).
Linking:

After generating object code, the compiler brings in another helper called the "linker." The linker has an important job: it makes sure that your program can use functions from libraries, like printf(), scanf(), and sqrt().
The linker does this in two ways:

Copying Code:
One way is by taking the code for these library functions and copying it directly into your program's object code. Think of it like taking pages from a book and putting them into your notebook. This makes the functions part of your program's code.

Run-Time Arrangement:
The other way is more like leaving the pages in the book but making sure you can access them when needed. In this case, the linker doesn't copy the entire library code into your program. Instead, it arranges things so that your program can find and use the library functions when it runs.
In simple terms, the compiler turns your code into a format the computer can understand (object code). Then, the linker helps your program use functions from libraries in two ways: either by adding those functions directly to your program's code or by setting things up so your program can use them when it runs.

Think of it like building a puzzle: the compiler creates the puzzle pieces (object code), and the linker makes sure all the pieces fit together, whether by adding more pieces to your puzzle or by keeping them separate but ready to use when you play the puzzle (run the program).

When the Linker Works:

1. Static Library:
  when the linker is invoked at compile time to include all the necessary code from libraries directly into your program, it's called a "Static Library." Think of  it like copying pages from a book and pasting them into your notebook before you start reading. Everything you need is right there in your notebook.
Dynamic Library:
2. Dynamic Library:
  In contrast, when the linker arranges things so your program can access library code at runtime without copying it, it's called a "Dynamic Library." Picture it as keeping the book separate from your notebook but having a way to quickly refer to the book when needed. The library functions are stored in a separate place, and your program can access them when it's running.

So follow below steps to use hashmap library which is static library on our c or c++ program!

-------------------------------------------------Steps to implement this library on our c program!-----------------------------------------------------------------
1. Clone the Repository: git clone <repository_url>
2. Compile Your Program: gcc -o test main.c -L<path_to_library> -l<library_name>
3. Run Your Program: ./test
