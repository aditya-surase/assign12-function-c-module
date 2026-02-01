#include <stdio.h>

int square(int n);
int cube(int n);

int main()
{
    int n;
    printf("Enter the value of number: ");
    scanf("%d", &n);

    printf("Square = %d\n", square(n));
    printf("Cube = %d", cube(n));
    return 0;
}

int square(int n)
{
    return n * n;
}

int cube(int n)
{
    return n * n * n;
}