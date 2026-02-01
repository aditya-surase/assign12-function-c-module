#include <stdio.h>

int add(int a, int b);   // declaration

int main()
{
    int a, b, sum;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);

    sum = add(a, b);     // call
    printf("Sum = %d", sum);
    return 0;
}

int add(int a, int b)    // definition
{
    return a + b;
}