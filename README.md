# stack-macro-c
 A simple macro for creating and using stacks of any type in C.
 This code is conviniently wrapped and formatted as a header file, so it can be included into many seperate files in your source code.

# CAUTION:
 The effective size of these stacks is one element less than the actuall number of elements allocated for them. This is due to the pointer arithmetic used to push elements to the stack. As a result, the last element in a stack will never be overwritten by the stack without causing a segfault. Knowing this, you can be reasonably sure any data intentionally stored in the last element of the arrray used to initailize a stack will not be accessed by the stack itself. This unused element could technically be used as a seperate varible of whatever type the stack is holding; however, in most cases, it is easier to ignore it's existence entirely.

# Improvements Needed:
 - Current example code needs improvements to readability, and should provide more useful implementations.
