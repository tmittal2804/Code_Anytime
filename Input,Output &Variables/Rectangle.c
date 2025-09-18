// Take the length and width of a rectangle and print its perimeter.

#include<stdio.h>
int main() {
    float length,width;
    printf("Enter the length of rectangle:");
    scanf("%f", &length);
    printf("Enter the width of rectangle:");
    scanf("%f",  &width);
    printf("Area  of rectangle is %0.2f\n",length*width);
    printf("Perimeter of rectangle is %0.2f\n",2*(length+width));
    return 0;
    }
