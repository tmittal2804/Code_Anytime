// Calculate and display a student’s average marks of five subjects

#include<stdio.h>
int main() {
    float sub1,sub2,sub3,sub4,sub5;
    printf("Enter the marks of subject 1: ");
    scanf("%f", &sub1);
    printf("Enter the marks of subject 2: ");
    scanf("%f", &sub2);
    printf("Enter the marks of subject 3: ");
    scanf("%f", &sub3);
    printf("Enter the marks of subject 4: ");
    scanf("%f", &sub4);
    printf("Enter the marks of subject 5: ");
    scanf("%f", &sub5);
    printf("student's average marks of five subjects are %0.1f\n",sub1+sub2+sub3+sub4+sub5/5);
    return 0;
    }
