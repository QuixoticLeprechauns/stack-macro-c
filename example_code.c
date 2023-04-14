#include "macro_stack.h"

#include <stdlib.h>
#include <stdio.h>

define_stack(int);

int main(void)
{
    int n = 10, *array = (int*) calloc(n, sizeof(int));
    stack_int stack = new_stack(array);
    while(stack_size(stack) < n)
    {
        stack_push(stack, rand());
        printf("stack_top: %d\n", stack_top(stack));
    }

    while(!stack_empty(stack))
    {
        printf("stack_pop: %d\n", stack_pop(stack));
    }

    return 0;
}