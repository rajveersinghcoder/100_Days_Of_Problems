/*Q4: Write a program to calculate the area and circumference of a circle given its radius.

Sample Test Cases:
Input 1:
7
Output 1:
Area=153.94, Circumference=43.96

Input 2:
3
Output 2:
Area=28.27, Circumference=18.85

*/

#include<stdio.h>

int main(){

    float r;

    printf("Enter the radius of circle :");
    scanf("%f" ,&r);

    printf("The circumference of circle is = %f\n" ,2*3.14159*r);

    printf("The area of circle is = %f\n" ,3.14159*r*r);

    return 0;
}