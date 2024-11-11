#include <stdio.h>
#include <stdlib.h>

#define size 100

int queue[size];
int front = -1, rear = -1;

void enqueue(int data) {
    if ((rear + 1) % size == front) {
        printf("Queue Overflow\n");
    } else {
        if (front == -1) {
            front = rear = 0;
        } else {
            rear = (rear + 1) % size;
        }
        queue[rear] = data;
        printf("%d enqueued to queue\n", data);
    }
}

int dequeue() {
    if (front == -1) {
        printf("Queue Underflow\n");
        return -1;
    }

    int data = queue[front];
    if (front == rear) {
        front = rear = -1;
    } else {
        front = (front + 1) % size;
    }
    return data;
}

void traverse() {
    if (front == -1) {
        printf("Queue is empty\n");
    } else {
        printf("Queue elements: ");
        int i = front;
        do {
            printf("%d ", queue[i]);
            i = (i + 1) % size;
        } while (i != (rear + 1) % size);
        printf("\n");
    }
}

int isEmpty() {
    return front == -1;
}

int isFull() {
    return (rear + 1) % size == front;
}

int main() {
    int choice, data;

    while (1) {
        printf("\nCircular Queue Operations:\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Traverse\n");
        printf("4. Is Empty\n");
        printf("5. Is Full\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter data to enqueue: ");
                scanf("%d", &data);
                enqueue(data);
                break;
            case 2:
                data = dequeue();
                if (data != -1) {
                    printf("%d dequeued from queue\n", data);
                }
                break;
            case 3:
                traverse();
                break;
            case 4:
                if (isEmpty()) {
                    printf("Queue is empty\n");
                } else {
                    printf("Queue is not empty\n");
                }
                break;
            case 5:
                if (isFull()) {
                    printf("Queue is full\n");
                } else {
                    printf("Queue is not full\n");
                }
                break;
            case 6:
                exit(0);
            default:
                printf("Invalid choice\n");
        }
    }

    return 0;
}