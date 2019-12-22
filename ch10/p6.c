#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define STACK_SIZE 100

int contents[STACK_SIZE];
int top = 0;

int stack_overflow(void) {
    printf("Expression is too complex\n");
    exit(EXIT_FAILURE);
}

int stack_underflow(void) {
    printf("Not enough operands in expression\n");
    exit(EXIT_FAILURE);
}

void make_empty(void) {
    top = 0;
}

bool is_empty(void) {
    return top == 0;
}

bool is_full(void) {
    return top == STACK_SIZE;
}

void push(int i) {
    if (is_full())
        stack_overflow();
    else
        contents[top++] = i;
}

int pop(void) {
    if (is_empty())
        stack_underflow();
    else
        return contents[--top];
}

int main(void) {
    char ch, left, right;
    while (1) {
        printf("Enter an RPN expression: ");
        for (;;) {
            scanf("%c", &ch);
            switch (ch) {
                case ' ':
                case '\n':
                    break;
                case '0':
                case '1':
                case '2':
                case '3':
                case '4':
                case '5':
                case '6':
                case '7':
                case '8':
                case '9':
                    push(ch - '0');
                    break;
                case '+':
                    right = pop();
                    left = pop();
                    push(left + right);
                    break;
                case '-':
                    right = pop();
                    left = pop();
                    push(left - right);
                    break;
                case '*':
                    right = pop();
                    left = pop();
                    push(left * right);
                    break;
                case '/':
                    right = pop();
                    left = pop();
                    push(left / right);
                    break;
                case '=':
                    printf("Value of Expression: %d\n", pop());
                    make_empty();
                    break;
                default:
                    exit(EXIT_FAILURE);
                    break;
            }

        }
    }


}