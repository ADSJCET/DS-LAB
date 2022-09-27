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

    int d, j;
    for (d = 0; d < n - 1; d++)
    {
        for (j = 0; j < n - d - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
    printf("Sorted array be like\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}