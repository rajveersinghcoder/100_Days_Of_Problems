/* Q14: Write a program to input a character and check whether it is a vowel or consonant using if–else.

Sample Test Cases:
Input 1:
a
Output 1:
Vowel

Input 2:
b
Output 2:
Consonant

*/

#include<stdio.h>

int main(){


    char character;

    printf("Enter Character :");
    scanf("%c" ,&character);

    if (character == 'a' || character == 'e' || character == 'i' || character == 'o' || character == 'u' ||
        
        character == 'A' || character == 'E' || character == 'I' || character == 'O' || character == 'U')

    {
        printf("Vowel\n");
    }

    else
    printf("Constant\n");

    return 0;
    

}