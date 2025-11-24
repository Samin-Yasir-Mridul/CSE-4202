#include <stdio.h>
int matInput(int r, int c, int mat[r][c]); // Function Prototype

void matOut(int r, int c, int mat[r][c])
{
    for (int j = 0; j < r; j++)
    {
        printf("|");
        for (int i = 0; i < c; i++)
        {
            printf(" %d ", mat[j][i]);
        }
        printf("|\n");
    }
}

int matInput(int r, int c, int mat[r][c])
{
    for (int j = 0; j < r; j++)
    {
        for (int i = 0; i < c; i++)
        {
            printf("Mat[%d][%d]= ", j, i);
            scanf("%d", &mat[j][i]);
        }
    }
    return mat[r][c];
}

int main()
{
    int r, c;
    printf("Enter the dimension of the matrix: ");
    scanf("%d %d", &r, &c);

    int mat[r][c];

    matInput(r, c, mat);
    matOut(r, c, mat);

    return 0;
}