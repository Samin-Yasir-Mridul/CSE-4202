#include <stdio.h>
int matInput(int a[3][3]);
int matOut(int a[3][3]);


int matInput(int a[3][3])
{
    int n = 3;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
}

int matOut(int a[3][3])
{
    int n = 3;
    for (int i = 0; i < n; i++)
    {
        printf("|");
        for (int j = 0; j < n; j++)
        {
            printf(" %d", a[i][j]);
        }
        printf("|\n");
    }
}

int main()
{
    int a[3][3], b[3][3];
    printf("Enter elements of 3x3 matrix:\n");
    matInput(a);

    printf("Entered matrix:\n");
   matOut(a);
    printf("Transpose of the matrix:\n");
    for (int i = 0; i < 3; i++)
    {
        printf("|");
        for (int j = 0; j < 3; j++)
        {
            b[i][j] = a[j][i];
            printf(" %d ", b[i][j]);
        }
        printf("|\n");
    }
}