#include <stdio.h>
// just base prototype for faster start
int max = 20, top = -1, ITEM;
int STACK[20];

int isEmpty() { return top == -1; }
int isFull() { return top == max - 1; }

void pop()
{
    if (isEmpty())
        printf("Underflow\n");
    else
        ITEM = STACK[top--];
}

void push(int item)
{
    if (isFull())
        printf("Overflow\n");
    else
        STACK[++top] = item;
}

void peek()
{
    if (isEmpty())
    {
        printf("Overflow\n");
    }
    else
        printf("Value at top is : %d\n", STACK[top]);
}

int main()
{
    scanf("%d", &ITEM);
    push(ITEM);
    peek();
}
