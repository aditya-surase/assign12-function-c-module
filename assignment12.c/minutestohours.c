#include <stdio.h>

int convert(int m);

int main()
{
    int m;
    printf("Enter the value of minutes: ");
    scanf("%d", &m);

    convert(m);
    return 0;
}

int convert(int m)
{
    int h = m / 60;
    int min = m % 60;
    printf("Hours = %d, Minutes = %d", h, min);
    return 0;
}