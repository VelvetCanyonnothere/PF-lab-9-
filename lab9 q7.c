
#include <stdio.h>

int factorial(int n);

int main() {
    int number;
    printf("Enter a number: ");
    do {
        scanf("%d", &number);
        if (number < 0) {
            printf("Invalid Input. Enter Again: ");
        }
    } while (number < 0);

    printf("The factorial of %d is %d\n", number, factorial(number));
    return 0;
}

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

