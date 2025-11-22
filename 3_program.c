//Program for PUSH and POP operation in stack using array
#include <stdio.h>
#include <stdlib.h>
#define MAX 5 // maximum size of stack

int stack[MAX];
int top = -1; // Empty stack

// Function to insert element into stack (Push operation)
void push(int value) {
    if (top == MAX - 1) {
        printf("Stack Overflow! Cannot insert %d\n", value);
    } else {
        top++;
        stack[top] = value;
        printf("%d pushed to stack\n", value);
    }
}

// Function to delete element from stack (Pop operation)
void pop() {
    if (top == -1) {
        printf("Stack Underflow! Cannot delete element\n");
    } else {
        int popped_value = stack[top];
        top--;
        printf("%d popped from stack\n", popped_value);
    }
}

// Function to display the elements of stack
void display() {
    if (top == -1) {
        printf("Stack is empty\n");
    } else {
        printf("Stack elements are:\n");
        for (int i = top; i >= 0; i--) {
            printf("%d\n", stack[i]);
        }
    }
}

int main() {
    int choice, value;
    do {
        printf("\n--- Stack Menu ---\n");
        printf("1. Push (Insert)\n");
        printf("2. Pop (Delete)\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter the value to be pushed: ");
                scanf("%d", &value);
                push(value);
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Exiting...\n");
                exit(0);
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 4);

    return 0;
}
