#include <stdio.h>
#define MAX 3
int R = -1, F = -1, ITEM, QUEUE[MAX];
void enqueue(){
    if (R == MAX - 1)
        printf("\nQueue Full\n");   
    else if (F==-1 && R==-1){
      F = R = 0;
      printf("\nEnter the value to Enqueue\n");
      scanf("%d",&ITEM);
      QUEUE[R] = ITEM;
    }
    else{
            printf("\nEnter the value to Enqueue\n");
              scanf("%d",&ITEM);
             QUEUE[++R] = ITEM;
        }
}

void dequeue(){
    if (F==-1 && R==-1)
        printf("\nQueue Empty\n");
    else if (F > R ){
      printf("\nQueue Empty, and Resetted\n");
          R = -1;
          F = -1;
    }
    else  printf("\nItem Removed: %d\n",  QUEUE[F++]);
}
void display(){
      int i;
      for (i=F; i<=R; i++)
        printf("\t %d",QUEUE[i]);
}
int main()
      {
      int X=0;
      printf("Queue Options\n");
            do {
                  printf("\n1.Enqueue\n2.Dequeue\n3.Display Queue\n4.Exit from Program\n");
                  printf("Select any options ");
                  scanf("%d",&X);
                  switch (X)
                  {
                        case 1: enqueue();
                                    break;
                        case 2: dequeue();
                                    break;
                        case 3: display();
                                    break;
                        default: break;
                  }
              }while (X==1 || X==2 || X==3);
}
