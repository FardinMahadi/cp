#include <stdio.h>
#include <math.h>

int main()
{
    int n, sum = 0;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        sum += pow(i, 2) * pow(i + 1, 2);
    }

    printf("Total Sum: %d", sum);

    return 0;
}