#include <stdio.h>

float area(float b, float h);

int main()
{
    float b, h;
    printf("Enter the value of base: ");
    scanf("%f", &b);
    printf("Enter the value of height: ");
    scanf("%f", &h);

    printf("Area of triangle = %.2f", area(b, h));
    return 0;
}

float area(float b, float h)
{
    return 0.5 * b * h;
}