#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Enter your Word or Sentence ");
    char string[50]; // 50 is just a rough array size
    gets(string);
    puts(string);
    int i;
    int vowels = 0;
    int consonants = 0;
    int incorret_chars = 0;

    for (i = 0; string[i] != '\0'; i++)
    {
        switch (string[i])
        {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
            vowels += 1;
            break;
        default:

            if (string[i] >= 'a' && string[i] <= 'z' || string[i] >= 'A' && string[i] <= 'Z')
                consonants += 1;
            else
                incorret_chars += 1;
            break;
        }
    }
    printf("no of of vowels %d\n", vowels);
    printf("no of of consonants %d\n", consonants);
    printf("no of invalid charachters %d\n", incorret_chars);
}