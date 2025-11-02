
#include <stdio.h>
#include <string.h>

int isAnagram(char string1[], char string2[]);

int main() {
    char string1[50];
    char string2[50];
    printf("Enter string 1: ");
    gets(string1);
    printf("Enter string 2: ");
    gets(string2);

    if (isAnagram(string1, string2)) {
        printf("Is a anagram\n");
    } else {
        printf("Is not a anagram\n");
    }

    return 0;
}

int isAnagram(char string1[], char string2[]) {
    int isAnagram = 1;
    int appearances = 0;
    for (int i = 0; i < strlen(string1); i++) {
        for (int j = 0; j < strlen(string2); j++) {
            if (string1[i] == string2[j]) {
                appearances++;
            }
        }
        if (appearances == 0) {
            isAnagram = 0;
        }
        appearances = 0;
    }
    return isAnagram;
}

