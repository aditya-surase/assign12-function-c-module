#include <stdio.h>

float area(float r);

int main()
{
    float r, a;
    printf("Enter the value of radius: ");
    scanf("%f", &r);

    a = area(r);
    printf("Area of circle = %.2f", a);
    return 0;
}

float area(float r)
{
    return 3.14 * r * r;
}