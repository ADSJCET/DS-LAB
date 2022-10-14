#include <stdio.h>
int main()
// c and Space Complexity
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

    printf("Enter the elements for the Array:\n");
    c++;
    for (i = 0; i < n; i++)
    {
        c++;
        scanf("%d", &array[i]);
    }
    c++;

    int x;
    c++;
    printf("Enter the Search Element: ");
    c++;
    scanf("%d", &x);
    c++;
    int flag = -1;
    c++;
    for (i = 0; i < n; i++)
    {
        c++;
        if (array[i] == x)
        {
            c++;
            flag = i;
            break;
        }
        c++;
    }
    c++;
    if (flag == -1)
    {
        c++;
        printf("Element not found\n");
    }
    else
    {
        c++;
        printf("Element found at %d location\n", flag + 1);
    }
    c++;

    printf("\n Time Complexity %d ", c);
    int space = sizeof(int) * (n + 4);
    printf("\n Space Complexity %d \n", space);
}
