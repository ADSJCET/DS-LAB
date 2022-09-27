#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char string[20] = "Hello";
    char string2[20] = "World";
    puts(string);
    // cmparing two string
    printf("%d \n", strcmp(string, string2));  // true =0 and False =1 and -1
    printf("%d \n", strcmpi(string, string2)); // true =0 and False =1

    // Concatination
    printf("%s \n", strcat(string, string2));

    // string length
    printf("%d \n", strlen(string));

    int x = sizeof(int);
    printf("%d \n", x);

    // copy a string
    printf("%s \n", strcpy(string, string2));

    // uppercase
    printf("%s\n", strupr(string));

    // lowercase
    printf("%s\n", strlwr(string));
}