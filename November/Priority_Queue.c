#include <stdio.h>
int n,front=-1,rear=-1,queue[20];
void enqueue()
{
    if(rear==n-1)
        printf("QUEUE IS FULL\n");
    else
    {
        printf("Enter the item to ENQUEUE: ");
        int item;
        scanf("%d",&item);
        if((front==-1)&&(rear==-1))
        {
            front=rear=0;
            queue[rear]=item;
        }
        else
        {
            rear++;
            int i = rear-1;
            while ((i>=0)&&(queue[i]>item))
            {
                queue[i+1]=queue[i];
                i--;
            }
            queue[i+1]=item;
        }
    }
}
void dequeue()
{
    if((front==-1)&&(rear==-1))
        printf("QUEUE IS EMPTY\n");
    else
    {
        printf("DEQUEUED ITEM: %d\n",queue[front]);
        if(front==rear)
            rear=front=-1;
        else
            front++;
    }
}
void display()
{
    int i;
    if((front==-1)&&(rear==-1))
        printf("QUEUE IS EMPTY\n");
    else
    {
        for(i=front;i<=rear;i++)
            printf("%d\t",queue[i]);
        printf("\n");
    }
}
int main()
{
    int c=1;
    printf("Enter the size of the QUEUE\n");
    scanf("%d",&n);
    printf("QUEUE OPERATIONS\n");
    while(c!=0)
    {
        printf("0. EXIT\n1. ENQUEUE\n2. DEQUEUE\n3. DISPLAY\n");
        printf("Enter your choice: ");
        scanf("%d",&c);
        switch(c)
        {
            case 0:
                printf("Exiting from QUEUE...\n");
                break;
            case 1:
                enqueue();
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            default:
                printf("Invalid Choice\n");
        }
    }
}
