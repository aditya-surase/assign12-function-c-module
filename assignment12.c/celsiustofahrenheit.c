#include <stdio.h>

float convert(float c);

int main()
{
    float c, f;
    printf("Enter the value of Celsius: ");
    scanf("%f", &c);

    f = convert(c);
    printf("Fahrenheit = %.2f", f);
    return 0;
}

float convert(float c)
{
    return (c * 9 / 5) + 32;
}