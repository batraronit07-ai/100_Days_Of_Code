// Q4: Write a program to calculate the area and circumference of a circle given its radius.

/*
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

int main()
{

    int radius;

    printf("Enter the radius of the circle: ");
    scanf("%d", &radius);

    float area = 3.14 * radius * radius;
    printf("Area of the circle: %.2f\n", area);

    float circumference = 2 * 3.14 * radius;
    printf("circumference of the circle: %.2f\n", circumference);

    return 0;
}



