#include <stdio.h>

float average(int a, int b, int c, int d, int e);

int main()
{
    int a, b, c, d, e;
    float avg;

    printf("Enter five values: ");
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);

    avg = average(a, b, c, d, e);
    printf("Average = %.2f", avg);
    return 0;
}

float average(int a, int b, int c, int d, int e)
{
    return (a + b + c + d + e) / 5.0;
}