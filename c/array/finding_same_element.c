#include <stdio.h>

int main()
{
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n], freq[n];

    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++)
    {
        printf("Array [%d]: ", i);
        scanf("%d", &arr[i]);
        freq[i] = -1;
    }

    for (int i = 0; i < n; i++)
    {
        int count = 1;

        if (freq[i] != 0)
        { 
            for (int j = i + 1; j < n; j++)
            {
                if (arr[i] == arr[j])
                {
                    count++;
                    freq[j] = 0;
                }
            }
            freq[i] = count;
        }
    }

    printf("\nDuplicate elements with frequency:\n");
    int found = 0;

    for (int i = 0; i < n; i++)
    {
        if (freq[i] > 1)
        {
            printf("%d appears %d times\n", arr[i], freq[i]);
            found = 1;
        }
    }

    if (!found)
        printf("No duplicates found\n");

    return 0;
}
