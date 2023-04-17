# stack-macro-c
 A simple macro for creating and using stacks of any type in C.
 This code is conviniently wrapped and formatted as a header file, so it can be included into many seperate files in your source code.

# Usage
 - To define a new type of stack, you must first call define_stack(type). This writes a new struct for that type of struct.
 - Stacks dont initialize or manage their own memory. They only keep track of pointers to element zero, and the top of the stack. You are responsible for allocating and freeing memory.
