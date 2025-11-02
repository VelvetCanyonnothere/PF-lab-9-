
#include <stdio.h>

int hcf(int num1, int num2);

int lcm(int num1, int num2);

int main() {
    int num1, num2;
    int choice;

    printf("Enter two numbers: ");
    scanf("%d%d", &num1, &num2);

    printf("Do you want to do HCF or LCM?\n");
    printf("1: HCF\n");
    printf("2: LCM\n");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("HCF of 2 inputs is %d", hcf(num1, num2));
    } else if (choice == 2) {
        printf("LCM of 2 inputs is %d", lcm(num1, num2));
    } else {
        printf("Enter valid choice\n");
    }

    return 0;
}

int hcf(int num1, int num2) {
    if (num2 == 0) {
        return num1;
    }
    return hcf(num2, num1 % num2);
}

int lcm(int num1, int num2) {
    return (num1 * num2) / hcf(num1, num2);
}

