#include <stdio.h>
// just base prototype for faster start
int R = -1, F = 0, MAX = 20, ITEM;
int QUEUE[20];

void enqueue(int item)
{
    if (R == MAX - 1)
        printf("Queue Full\n");
    else
        QUEUE[++R] = item;
}

void dequeue()
{
    if (R < F)
        printf("Queue Empty\n");
    else
        ITEM = QUEUE[F++];
}

void resetQ()
{
    R = -1;
    F = 0;
}

int main()
{
    resetQ();
    enqueue(100);
    dequeue();
    printf("%d\n", ITEM);
}