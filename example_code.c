#include "stack_macro.h"
#include <stdio.h>

// Implements a new struct for stacks that hold int.
declare_stack(int);


typedef unsigned long ulong;
// Implements a new struct for stacks that hold unsigned long.
declare_stack(ulong);


int main(void)
{
    int elements_a[4];

    // initializes a stack holding the type int, with 3 usable elements
    stack_t(int) stack_a = new_stack(elements_a, 4);

    // pushes int values to the top of stack_a
    stack_push(stack_a, 1);
    stack_push(stack_a, 2);
    stack_push(stack_a, 3);

    /* uncomment line to segfault: last element in stack is inaccessible to the stack. */
    // stack_push(stack_a, 4);


    // stack_a.elements preserves the location of the first element
    // in the stack. This can be used to determine if the stack is empty
    while (stack_a.index > stack_a.elements)
        // pops elements until stack is empty
        printf("POPPED: %d\n", stack_pop(stack_a));
    
    ulong elements_b[4];
    stack_t(ulong) stack_b = new_stack(elements_b, 4);

    ulong i = 1;

    // you can calculate the location of the last usable stack element like this:
    ulong* stack_end = stack_b.elements;
    stack_end += stack_b.size - 1;

    // fill the stack completley
    while (stack_b.index < stack_end)
        printf("Pushed: %d\n", stack_push(stack_b, i++));

    // empty the stack completely
    while (stack_b.index > stack_b.elements)
        printf("POPPED: %d\n", stack_pop(stack_b));

    return 0;
}