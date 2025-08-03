#include <stdio.h>

int main()
{
    int i, x, n, arr[100], start = 0;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("Sorted array elements are: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\nEnter element to search: ");
    scanf("%d", &x);

    int last = n - 1;
    while (start <= last)
    {
        int middle = (start + last) / 2;
        if (arr[middle] == x)
        {
            printf("Item found at position %d\n", middle + 1);
            return 0;
        }
        else if (arr[middle] < x)
        {
            start = middle + 1;
        }
        else
        {
            last = middle - 1;
        }
    }

    printf("Item not found\n");
    return 0;
}
