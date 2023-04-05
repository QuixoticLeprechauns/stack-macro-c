#ifndef MACRO_STACK_H
#define MACRO_STACK_H

/**
 * Pushes value B to stack A. Returns value pushed.
*/
#define stack_push(A,B) (*(++(A.index)) = (B))

/**
 * Pops the value on top of stack A. Returns value popped.
*/
#define stack_pop(A) (*((A.index)--))

/**
 * Peeks at the value on top of stack A, without modifying it. Returns value peeked at.
*/
#define stack_peek(A) (*(A.index))

/**
 * Allows casting to an already declared variant of stack.
*/
#define stack_t(T) struct stack_##T

/**
 * Implements a structure for a new variation of stack that holds the type T. 
*/
#define declare_stack(T) struct stack_##T { T *elements; T *index; int size; }

/**
 * Creates an instance of a stack from a pointer to it's first element E, and the size of the total memory allocated to it S.
*/
#define new_stack(E, S) { (E), (E), (S), }

/**
 * Calculates a pointer to the last usable element in stack A.
*/
#define stack_end(A) ((A.elements) + ((A.size) - 1))

#endif