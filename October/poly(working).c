#include <stdio.h>
struct Polynomial

{
    int coeff;
    int exp;
};

struct Polynomial first[15], second[15], result[15];

void display(struct Polynomial poly[], int terms)
{
    int i;
    printf("\n");
    for (i = 0; i < terms; i++)
    {
        printf("%dX^%d", poly[i].coeff, poly[i].exp);
        if (i != terms - 1)
            printf("+");
    }
}

int readExpression(struct Polynomial poly[])
{
    int terms, i;
    printf("\nEnter Polynomial size: ");
    scanf("%d", &terms);
    printf("\nEnter the coeffecients and exponents in DESCENDING order");
    for (i = 0; i < terms; i++)
    {
        printf("\nCoeffecient of X: ");
        scanf("%d", &poly[i].coeff);
        printf("Exponent of X: ");
        scanf("%d", &poly[i].exp);
    }
    return terms;
}

int addExpressions(int firstCount, int secondCount)
{
    int i = 0, j = 0, k = 0;
    while (i < firstCount && j < secondCount)
    {
        if (first[i].exp == second[j].exp)
        {
            result[k].coeff = first[i].coeff + second[j].coeff;
            result[k].exp = first[i].exp;
            i++;
            j++;
            k++;
        }
        else if (first[i].exp > second[j].exp)
        {
            result[k].coeff = first[i].coeff;
            result[k].exp = first[i].exp;
            i++;
            k++;
        }
        else
        {
            result[k].coeff = second[j].coeff;
            result[k].exp = second[j].exp;
            j++;
            k++;
        }
    }

    while (i < firstCount)
    {
        result[k].coeff = first[i].coeff;
        result[k].exp = first[i].exp;
        k++;
        i++;
    }

    while (j < secondCount)
    {
        result[k].coeff = second[j].coeff;
        result[k].exp = second[j].exp;
        k++;
        j++;
    }
    return k;
}

int main()
{
    printf("\nFirst Polynomial\n");
    int firstCount = readExpression(first);
    printf("\neqn is ");
    display(first, firstCount);

    printf("\nSecond Polynomial\n");
    int secondCount = readExpression(second);
    printf("\neqn is ");
    display(second, secondCount);

    int resultCount = addExpressions(firstCount, secondCount);

    printf("\nResultant eqn is ");
    display(result, resultCount);
}
