#ifndef MACRO_STACK_H
#define MACRO_STACK_H
#define define_stack(T) typedef struct{T*begin;T*index;}stack_##T
#define new_stack(A) {(A),(A)}
#define stack_empty(A) (A.begin == A.index)
#define stack_push(A,B) (*(++A.index) = (B))
#define stack_pop(A) (*A.index--)
#define stack_top(A) (*A.index)
#define stack_size(A) (A.index - A.begin)
#endif