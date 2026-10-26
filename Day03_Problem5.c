/* Q5: Write a program to convert temperature from Celsius to Fahrenheit.

Sample Test Cases:
Input 1:
0
Output 1:
Fahrenheit=32

Input 2:
100
Output 2:
Fahrenheit=212

*/

#include<stdio.h>

int main(){

    
    float f;
    float Celsius;

    printf("Enter the temperature in Celsius :");
    scanf("%f" ,&Celsius);

    printf("After converting the temperature from Celsius to Fahrenheit %f" ,(Celsius * 9.0 / 5.0) + 32);

    return 0;
}