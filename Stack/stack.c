#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct {
    int *stack;
    int top;
    int capacity;
} Stack;

Stack* createStack(int capacity) {
    Stack* stack = (Stack*)malloc(sizeof(Stack));
    stack->capacity = capacity;
    stack->top = -1;
    stack->stack = (int*)malloc(capacity * sizeof(int));
    return stack;
}

bool isFull(Stack* stack) {
    return stack->top == stack->capacity - 1;
}

bool isEmpty(Stack* stack) {
    return stack->top == -1;
}

void push(Stack* stack, int value) {
    if (isFull(stack)) {
        printf("Stack is full\n");
        return;
    }
    stack->stack[++stack->top] = value;
}

int pop(Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty\n");
        return -1;
    }
    return stack->stack[stack->top--];
}

int peek(Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty\n");
        return -1;
    }
    return stack->stack[stack->top];
}

void freeStack(Stack* stack) {
    free(stack->stack);
    free(stack);
}

int main() {
    Stack* stack = createStack(5);
    push(stack, 1);
    push(stack, 2);
    push(stack, 3);
    push(stack, 4);
    push(stack, 5);

    printf("Top element is: %d\n", peek(stack));
    printf("Stack is full: %s\n", isFull(stack) ? "true" : "false");

    printf("Popped element: %d\n", pop(stack));
    printf("Top element after pop: %d\n", peek(stack));

    freeStack(stack);
    return 0;
}