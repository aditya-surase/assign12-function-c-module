#include <stdio.h>

int perimeter(int l, int w);

int main()
{
    int l, w;
    printf("Enter the value of length: ");
    scanf("%d", &l);
    printf("Enter the value of width: ");
    scanf("%d", &w);

    printf("Perimeter = %d", perimeter(l, w));
    return 0;
}

int perimeter(int l, int w)
{
    return 2 * (l + w);
}