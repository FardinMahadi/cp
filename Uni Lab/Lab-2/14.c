#include <stdio.h>

int main()
{
    int n, sum = 0;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        sum += (2 * i - 1) * (2 * i + 1) * (2 * i + 3) * (2 * i + 5);
    }

    printf("Total Sum: %d", sum);

    return 0;
}