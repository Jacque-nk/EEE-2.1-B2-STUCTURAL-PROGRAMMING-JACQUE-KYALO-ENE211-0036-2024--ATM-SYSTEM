#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 5

int buffer[BUFFER_SIZE];
int head = 0;     // next write position
int count = 0;    // number of stored elements

// Function to insert a new sample
void insertSample(int value) {
    buffer[head] = value;
    head = (head + 1) % BUFFER_SIZE;

    if (count < BUFFER_SIZE) {
        count++;
    }
}

// Function to print samples (oldest → newest)
void printSamples() {
    int i;
    int index;

    if (count == 0) {
        printf("Buffer is empty\n");
        return;
    }

    printf("Stored samples (oldest to newest): ");
    index = (head - count + BUFFER_SIZE) % BUFFER_SIZE;

    for (i = 0; i < count; i++) {
        printf("%d ", buffer[index]);
        index = (index + 1) % BUFFER_SIZE;
    }
    printf("\n");
}

int main() {
    int choice, value;

    while (1) {
        printf("\n1. Insert sample");
        printf("\n2. Print samples");
        printf("\n3. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Enter sensor value: ");
            scanf("%d", &value);
            insertSample(value);
        }
        else if (choice == 2) {
            printSamples();
        }
        else if (choice == 3) {
            break;
        }
        else {
            printf("Invalid choice\n");
        }
    }

    return 0;
}

