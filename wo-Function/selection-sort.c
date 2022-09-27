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

    int d, j, min;
    for (d = 0; d < n - 1; d++)
    {
        // initial miinimum
        min = d;

        // loop for finding the minimum element
        for (j = d + 1; j < n; j++)
        {
            if (array[j] < array[min])
                min = j;
        }
        if (min != d)
        {
            // swapping the minimum values to current value
            int temp = array[d];
            array[d] = array[min];
            array[min] = temp;
        }
    }

    printf("Sorted array be like\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}