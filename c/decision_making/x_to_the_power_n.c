#include <stdio.h>
int main()
{
    int x, i = 1, n;
    int res = 1;
    printf("Enter the number x: ");
    scanf("%d", &x);

    printf("Enter the power n: ");
    scanf("%d", &n);

    while (i <= n)
    {
        res = res * x;
        i++;
    }
    printf("%d power %d is %d", x, n, res);
    return 0;
}