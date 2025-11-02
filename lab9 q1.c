#include <stdio.h> 
 
int decimalToBinary(int number); 
 int main() {     
 int accessCode;     
 printf("Enter a number: ");     
 scanf("%d", &accessCode); 
 int binaryNumber = decimalToBinary(accessCode);     
 printf("The binary number is: %d\n", binaryNumber); 
 return 0; 
}  
int decimalToBinary(int number) {     
if (number > 1) { 
        return (number % 2) + 10 * decimalToBinary(number / 2); 
    } else { 
        return number % 2; 
    } 
} 

