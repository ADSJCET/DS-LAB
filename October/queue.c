#include <stdio.h>
#define MAX 5
int R = -1, F = -1, ITEM, QUEUE[MAX];
void enqueue()
{
    if (R == MAX - 1)
        printf("\nQueue Full\n");   
    else if (F==-1 && R==-1)
    {
      F = R = 0;
      printf("\nEnter the value to Enqueue\n");
      scanf("%d",&ITEM);
      QUEUE[R] = ITEM;
    }
    else
        {
            printf("\nEnter the value to Enqueue\n");
              scanf("%d",&ITEM);
             QUEUE[++R] = ITEM;
        }
}

void dequeue()
{
    if (F==-1 && R==-1)
        printf("\nQueue Empty\n");
    else if (F > R )
    {
      printf("\nQueue Empty, and Resetted\n");
          R = -1;
          F = -1;
    }
    else  printf("\nQueue dequeued: %d\n",  QUEUE[F++]);
}

int main()
      {
      int X=0;
      printf("Queue Options\n");
            do {
                  printf("\n1.Queue Enqueue\n2.Queue Dequeue\n3.Exit for Program\n");
                  printf("Select any options ");
                  scanf("%d",&X);
                  switch (X)
                  {
                        case 1: enqueue();
                                    break;
                        case 2: dequeue();
                                    break;
                        default: break;
                  }
              }while (X==1 || X==2);
}
