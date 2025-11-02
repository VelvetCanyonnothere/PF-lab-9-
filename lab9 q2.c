#include <stdio.h>

void swapArrays(int *a, int *b, int size);

int main() {
    int lahore[] = {11, 22, 33, 44, 55};
    int karachi[] = {66, 77, 88, 99, 100};

    int n = sizeof(lahore) / sizeof(lahore[0]);

    printf("Before sorting:\n");
    printf("Lahore: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", lahore[i]);
    }
    printf("\n");
    printf("Karachi: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", karachi[i]);
    }
    printf("\n");

    swapArrays(lahore, karachi, n);

    printf("\nAfter sorting:\n");
    printf("Lahore: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", lahore[i]);
    }
    printf("\n");
    printf("Karachi: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", karachi[i]);
    }

    return 0;
}

void swapArrays(int *a, int *b, int size) {
    for (int i = 0; i < size; i++) {
        int temp = a[i];
        a[i] = b[i];
        b[i] = temp;
    }
}

