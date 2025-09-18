// Read a distance in kilometers and print its equivalent in meters, centimeters, and millimeters.

#include<stdio.h>
int main () {
    float Distance;
    printf("Enter distance in kilometers:");
    scanf("%f", &Distance);
    printf("Distance is meters is %0.2f\n",Distance*1000);
    printf("Distance in centimeters is %0.2f\n",Distance*100000);
    printf("Distance in millimeter is %0.2f\n",Distance*1000000);
    return 0;
    }
