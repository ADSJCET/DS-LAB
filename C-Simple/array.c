#include <stdio.h>
int main()
{
    int n;
    printf("Enter the limit of array list ");
    scanf("%d", &n);
    n += 1;
    int array[n];
    int i = 0;
    for (i = 0; i < n - 1; i++)
    {
        printf("enter a value for list ");
        scanf("%d", &array[i]);
    }
    int x;
    printf("enter your search element ");
    scanf("%d", &x);

    int flag = 0;
    for (i = 0; i < n - 1; i++)
    {
        if (x == array[i])
        {
            if (flag == 0)
            {
                printf("Element found at ");
            }
            printf("%d, ", i + 1);
            flag = 1;
        }
    }
    puts("\n");
    if (flag == 0)
    {
        printf("Element not found and i have added the element at end\n");
        array[n - 1] = x;
        printf("array[%d]= %d\n", n, array[n - 1]);
    }
}