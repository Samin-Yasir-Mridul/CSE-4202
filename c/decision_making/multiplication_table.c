#include <stdio.h>
int main()
{
    int row, col;

    printf("Enter your number: ");
    scanf("%d", &row);

    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= row; j++)
        {
            printf("%d x %d = %d\n", i, j, i * j);
        }
        printf("\n");
    }
    return 0;
}