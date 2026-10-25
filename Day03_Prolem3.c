/*Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.


Sample Test Cases:
Input 1:
5 10
Output 1:
Area=50, Perimeter=30

Input 2:
3 7
Output 2:
Area=21, Perimeter=20

*/

#include<stdio.h>

int main(){

    float l;
    float b;
    printf("Enter the length of rectangle :\t");
    scanf("%f" ,&l);

    printf("Enter the breadth of rectangle :");
     scanf("%f" ,&b);

     printf("The perimeter of rectangle is %f\n" , 2*(l+b));

     printf("The area of rectangle is %f\n" ,l*b);

     return 0;

}
