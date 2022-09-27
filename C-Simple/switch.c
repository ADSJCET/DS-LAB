// simple f**king caluculator

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\t\tSimple Calculator\nEnter a Number then an Operator and ends with second Number\n");
    int v1, v2, result;
    char v3;
    scanf("%d %c %d", &v1, &v3, &v2);
    switch (v3)
    {
    case '+':
        result = v1 + v2;
        break;
    case '-':
        result = v1 - v2;
        break;
    case '*':
        result = v1 * v2;
        break;
    case '/':
        result = v1 / v2;
        break;
    case '%':
        result = v1 % v2;
        break;
    case '^':
        result = 1;
        int x = v2;
        for (x; x > 0; x--)
        {
            result *= v1;
        }
        break;
    default:
        printf("wrong operator\n");
        exit(0);
    }

    printf("%d %c %d = %d\n", v1, v3, v2, result);
}