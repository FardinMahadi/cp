#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if (a > b && a < c)
    {
        printf("%d is the medium number.", a);
    }
    else if (a > c && a < b)
    {
        printf("%d is the medium number.", a);
    }
    else if (b > a && b < c)
    {
        printf("%d is the medium number.", b);
    }
    else if (b > c && b < a)
    {
        printf("%d is the medium number.", b);
    }
    else if (c > a && c < b)
    {
        printf("%d is the medium number.", c);
    }
    else if (c > b && c < c)
    {
        printf("%d is the medium number.", c);
    }

    return 0;
}