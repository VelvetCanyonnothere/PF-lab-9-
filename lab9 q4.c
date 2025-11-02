
#include <stdio.h>

int strLength(char *string);

int main() {
    char string[100];
    printf("Insert string: ");
    gets(string);

    printf("String length: %d", strLength(string));
    return 0;
}

int strLength(char *string) {
    int i = 0;
    do {
        i++;
    } while (string[i] != '\0');
    return i;
}

