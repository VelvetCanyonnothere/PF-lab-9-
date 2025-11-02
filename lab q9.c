
#include <stdio.h>

int totalBillAmount(int shoppingCart[][2], int noOfItemsPurchased);

int main() {
    char userName[100];
    int noOfItemsPurchased;

    printf("Enter your name: ");
    gets(userName);
    printf("Enter number of purchases: ");
    scanf("%d", &noOfItemsPurchased);

    char itemNames[noOfItemsPurchased][100];
    int shoppingCart[noOfItemsPurchased][2];

    for (int i = 0; i < noOfItemsPurchased; i++) {
        printf("Enter item name: ");
        getchar();
        gets(itemNames[i]);
        printf("Enter quantity: ");
        scanf("%d", &shoppingCart[i][0]);
        printf("Enter price per unit: ");
        scanf("%d", &shoppingCart[i][1]);
    }

    printf("Total bill is %d", totalBillAmount(shoppingCart, noOfItemsPurchased));

    return 0;
}

int totalBillAmount(int shoppingCart[][2], int noOfItemsPurchased) {
    int total = 0;
    for (int i = 0; i < noOfItemsPurchased; i++) {
        total += shoppingCart[i][0] * shoppingCart[i][1];
    }
    return total;
}

