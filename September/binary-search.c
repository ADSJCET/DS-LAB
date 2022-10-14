#include <stdio.h>

int binarySearch(int array[], int F, int L, int x)
{
    int MID = F + (L - F) / 2;
    if (F <= L)
    {

        if (array[MID] == x)
            return MID;
        if (array[MID] < x)
        {
            F = MID + 1;
            return binarySearch(array, F, L, x);
        }
        else
        {
            L = MID - 1;
            return binarySearch(array, F, L, x);
        }
    }
    return -1;
}

int main()
{

    printf("Enter the limit of Array: ");
    int n;
    scanf("%d", &n);
    int array[n], i;
    // only for the sorted array
    printf("Enter the elements for the Array in sorted order:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    // searching starts here
    int x;
    printf("Enter the Search Element: ");
    scanf("%d", &x);
    int F = 0, L = n - 1;
    int index = binarySearch(array, F, L, x);
    // return -1 or location of element

    if (index == -1)
        printf("Element not found\n");
    else
        printf("Element found at %d location\n", (index + 1));
    // location is not based on the array
}