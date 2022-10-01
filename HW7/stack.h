/*
CH-230-A
Problem7-7.c 
Nelson Tseng 
ntseng@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 12
#define EMPTY (-1)
struct stack
{
    int count;
    int array[12]; // Container
};
//function declarations
void createEmptyStack(struct stack *new_stack);
int isfull(struct stack *stack);
int isempty(struct stack *stack);
struct stack *push(struct stack *top);
struct stack *pop(struct stack *top);
void empty(struct stack *stack);