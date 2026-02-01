#include <stdio.h>

float percentage(int m1, int m2, int m3, int m4, int m5);   // declaration

int main()
{
    int m1, m2, m3, m4, m5;
    float per;

    printf("Enter the value of subject 1: ");
    scanf("%d", &m1);
    printf("Enter the value of subject 2: ");
    scanf("%d", &m2);
    printf("Enter the value of subject 3: ");
    scanf("%d", &m3);
    printf("Enter the value of subject 4: ");
    scanf("%d", &m4);
    printf("Enter the value of subject 5: ");
    scanf("%d", &m5);

    per = percentage(m1, m2, m3, m4, m5);   // function call

    printf("Percentage = %.2f", per);
    return 0;
}

float percentage(int m1, int m2, int m3, int m4, int m5)   // definition
{
    int total;
    total = m1 + m2 + m3 + m4 + m5;
    printf("Total Marks = %d\n", total);

    return total / 5.0;
}