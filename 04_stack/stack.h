#ifndef STACK_H
#define STACK_H

typedef struct stack {
    int init_max;
    int max;
    int ptr;
    int *data;
} stack;

void init(stack *s, int max);
void push(stack *s, int x);
int pop(stack *s);
int peek(const stack *s);
void clear(stack *s);
int capacity(const stack *s);
int size(const stack *s);
int search(const stack *s, int x);
void printStack(const stack *s);
void terminate(stack *s);

#endif