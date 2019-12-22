#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define STACK_SIZE 100

char contents[STACK_SIZE];
int top = 0;

int stack_overflow(void) {
    printf("Stack overflow\n");
    exit(EXIT_FAILURE);
}

int stack_underflow(void) {
    printf("Stack underflow\n");
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

void push(char c) {
    if (is_full())
        stack_overflow();
    else
            contents[top++] = c;
}

char pop(void) {
    if (is_empty())
        stack_underflow();
    else
        return contents[--top];
}

int main(void) {
    char ch;
    bool flag = true;

    printf("Enter parentheses and/or braces: ");

    while ((ch = getchar()) != '\n') {
        if (ch == '{' || ch == '(')
            push(ch);
        else if (ch == '}' && pop() != '{') {
            printf("Parentheses not nested properly.\n");
            flag = false;
            break;
        } else if (ch == ')' && pop() != '(') {
            printf("Parentheses not nested properly.\n");
            flag = false;
            break;
        }
    }

    if ( flag && is_empty())
        printf("All parentheses and braces are matched\n");
    else
        printf("Parentheses and braces are not matched\n");

    return 0;
}