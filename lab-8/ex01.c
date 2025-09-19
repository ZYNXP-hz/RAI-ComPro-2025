#include <stdio.h>
#define PI 3.14

float circumfernce(float radius)
{
    return 2 * PI *radius;
}

float area(float radius)
{
    return PI * radius * radius;
}
int main()
{
    float r,c,a;

    printf("Enter the radius in cm:");
    scanf("%f",&r);

    c = circumfernce(r);
    a = area(r);

    printf("Circumference:%.2f\n",c);
    printf("Area:%.2f\n",a);

    return 0;
}