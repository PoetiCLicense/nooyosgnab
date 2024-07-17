#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

void init(stack *s, int max) {
    s->init_max = s->max = max;
    s->ptr = 0;
    s->data = calloc(max, sizeof(int));
}

void push(stack *s, int x) {
    if (s->ptr >= s->max)
        s->data = realloc(s->data, (++s->max) * sizeof(int));

    s->data[s->ptr++] = x;
}

int pop(stack *s) {
    return s->data[--s->ptr];
}

int peek(const stack *s) {
    return s->data[s->ptr-1];
}

void clear(stack *s) {
    s->ptr = 0;
    s->max = s->init_max;
}

int capacity(const stack *s) { // max length
    return s->max;
}

int size(const stack *s) { // current length
    return s->ptr;
}

int search(const stack *s, int x) {
    for (int i = 0; i < s->ptr; i++)
        if (s->data[i] == x)
            return i;

    return -1;
}

void printStack(const stack *s) {
    printf("{ ");
    for (int i = 0; i < s->ptr; i++) {
        printf("%d", s->data[i]);
        if (i < s->ptr - 1) {
            printf(", ");
        }
    }
    printf(" }\n");
}

void terminate(stack *s) {
    free(s->data);
    s->init_max = s->max = s->ptr = 0;
}