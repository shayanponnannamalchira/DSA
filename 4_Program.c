// Queue implementation using linked list in C
#include <stdio.h>
#include <stdlib.h>

// Node structure
struct Node {
    int data;
    struct Node* next;
};

struct Node* front = NULL;
struct Node* rear = NULL;

// Check if queue is empty
int isEmpty() {
    return (front == NULL);
}

// Enqueue (Insert at rear)
void enqueue(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("\n[ERROR] Queue Overflow! Cannot allocate memory.\n");
        return;
    }

    newNode->data = value;
    newNode->next = NULL;

    if (isEmpty()) {
        front = newNode;
        rear = newNode;
    } else {
        rear->next = newNode;
        rear = newNode;
    }

    printf("\n[SUCCESS] Enqueued %d.\n", value);
}

// Dequeue (Remove from front)
int dequeue() {
    if (isEmpty()) {
        printf("\n[WARNING] Queue Underflow! Cannot dequeue from an empty queue.\n");
        return -1;
    }

    struct Node* temp = front;
    int dequeuedValue = temp->data;

    front = front->next;
    free(temp);

    if (front == NULL)
        rear = NULL;

    printf("\n[SUCCESS] Dequeued %d.\n", dequeuedValue);
    return dequeuedValue;
}

// Peek (See front element)
int peek() {
    if (isEmpty()) {
        printf("\n[WARNING] Queue is Empty. Peek not possible.\n");
        return -1;
    }

    return front->data;
}

// Display queue elements
void display() {
    if (isEmpty()) {
        printf("\n[INFO] Queue is Empty.\n");
        return;
    }

    struct Node* current = front;
    printf("\n---- Current Queue (Front to Rear) ----\n");
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

// Print menu
void printMenu() {
    printf("\n=========== Queue Operations Menu ===========\n");
    printf("1. Enqueue (Insert at Rear)\n");
    printf("2. Dequeue (Remove from Front)\n");
    printf("3. Peek (Get Front Element)\n");
    printf("4. Display Queue\n");
    printf("5. Check if Queue is Empty\n");
    printf("6. Exit\n");
    printf("Enter your choice: ");
}

int main() {
    int choice, value;

    do {
        printMenu();
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the value to enqueue: ");
                scanf("%d", &value);
                enqueue(value);
                break;

            case 2:
                dequeue();
                break;

            case 3:
                value = peek();
                if (value != -1)
                    printf("\nFront element is: %d\n", value);
                break;

            case 4:
                display();
                break;

            case 5:
                if (isEmpty())
                    printf("\nQueue is Empty.\n");
                else
                    printf("\nQueue is NOT Empty.\n");
                break;

            case 6:
                printf("Exiting program.\n");
                break;

            default:
                printf("Invalid choice! Please select a valid option.\n");
        }

    } while (choice != 6);

    return 0;
}