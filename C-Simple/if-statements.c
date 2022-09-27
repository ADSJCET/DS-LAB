// largest among us :)

#include <stdio.h>
int main()
{
    printf("Enter three numbers \n");
    int v1, v2, v3;
    scanf("%d %d %d", &v1, &v2, &v3);

    int v4 = v1 > v2 ? v1 : v2;
    printf("The Largest is %d\n", v4 > v3 ? v4 : v3);
}