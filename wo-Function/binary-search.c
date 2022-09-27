#include <stdio.h>
int main()
{

    int c = 0;
    printf("Enter the limit of Array: ");
    c++;
    int n;
    c++;
    scanf("%d", &n);
    c++;
    int array[n], i;
    c++;
    // only for the sorted array
    printf("Enter the elements for the Array in sorted order:\n");
    c++;
    for (i = 0; i < n; i++, c++)
    {
        scanf("%d", &array[i]);
    }
    c++;

    // searching starts here
    int x;
    c++;
    printf("Enter the Search Element: ");
    c++;
    scanf("%d", &x);
    c++;
    int flag = -1;
    c++;

    // essencial for the searching
    int F = 0, L = n - 1;
    c++;
    while (F <= L)
    {
        int MID = F + (L - F) / 2;
        c++;
        if (array[MID] == x)
        {
            c++;
            flag = MID;
            break;
        }
        c++;
        if (array[MID] < x)
        {
            F = MID + 1;
            c++;
        }
        else
        {
            c++;
            L = MID - 1;
        }
        c++;
    }

    if (flag == -1)
    {
        c++;
        printf("Element not found\n");
    }
    else
    {
        c++;
        printf("Element found at %d location\n", (flag + 1));
    }
    // location is not based on the array
    printf("c complexity %d\n", c);
    printf("Space complexity %d\n", sizeof(int) * (7 + n));
}