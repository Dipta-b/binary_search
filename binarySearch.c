// Dipta Banik CSE2302029067
// Binary Search
#include <stdio.h>
int main()
{

    int arr[10] = {2, 5, 10, 35, 44, 49, 53, 57, 86, 96}, i, x, size = 10, start = 0, last = size - 1;
    printf("Array Elements Are :");

    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\nItem You Want To Search? ");
    scanf("%d", &x);

    while (start <= last)
    {
        int middle = (start + last) / 2;
        if (arr[middle] == x)
        {
            printf("Item Found At Position : %d", middle + 1);
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
    printf("Item is not in the array");
    return 0;
}