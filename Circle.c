#include <stdio.h>
#define PI 3.14
int main() {
    // Write C code here
    float r,area,perimeter;
    printf("Enter radius of circle:");
    scanf("%f",&r);
    perimeter=2*PI*r;
    area=PI*r*r;
    printf("Perimeter: %f\n",perimeter);
    printf("Area: %f",area);
}
