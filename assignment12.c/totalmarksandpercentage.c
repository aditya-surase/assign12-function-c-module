#include <stdio.h>

float percentage(int total);

int main()
{
    int total;
    printf("Enter the total marks of 5 subjects: ");
    scanf("%d", &total);

    printf("Percentage = %.2f", percentage(total));
    return 0;
}

float percentage(int total)
{
    return total / 5.0;
}