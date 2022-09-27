#include <stdio.h>
int main()
{

    printf("Enter the limit of Array: ");
    int n;
    scanf("%d", &n);
    int array[n], i;

    printf("Enter the elements for the Array:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &array[i]);

    int d, key, j;
    // without an external function
    for (d = 1; d < n; d++)
    {
        key = array[d];
        j = d - 1;

        while (j >= 0 && array[j] > key)
        {
            array[j + 1] = array[j];
            j = j - 1;
        }
        array[j + 1] = key;
    }

    printf("Sorted array be like\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}