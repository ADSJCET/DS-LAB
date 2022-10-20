#include <stdio.h>
#define MAX 3
int R = -1, F = -1, ITEM, DEQUEUE[MAX];
void IN_R(){
    if (R == MAX - 1)
        printf("\nQueue Full\n");   
    else { 
            if (R == -1)
            {     F = 0;
                  printf("\nEnter the value to Enqueue\n");
                  scanf("%d",&ITEM);
                  DEQUEUE[++R] = ITEM;
            }
            else {
                  printf("\nEnter the value to Enqueue\n");
                  scanf("%d",&ITEM);
                  DEQUEUE[++R] = ITEM;
              }
         }
}
void IN_F(){
      if (F==0)
            printf("\nQueue Full\n");   
      else {
                  printf("\nEnter the value to Enqueue\n");
                  scanf("%d",&ITEM);
                  DEQUEUE[--F] = ITEM;
              }
}

void DEL_F(){
    if (F==-1 && R==-1)
        printf("\nQueue Empty\n");
    else 
    { 
        printf("\nItem Removed: %d\n",  DEQUEUE[F]);
        F == R ? (F= R = -1): F++; 
    }
}
void DEL_R(){
      if (F==-1 && R==-1)
        printf("\nQueue Empty\n");
    else 
    { 
        printf("\nItem Removed: %d\n",  DEQUEUE[R]);
        F == R ? (F= R = -1): R--;     
    }
}
void display(){
      int i;
      for (i=F; i<=R; i++)
        printf("\t %d",DEQUEUE[i]);
}
int main()
      {
      int X;
      printf("Dequeue Queue Options\n");
            do {
                  printf("\n1.Insert at Rear\n2.Insert at Front\n3.Delete at Front\n");
                  printf("4.Delete at Rear\n5.Display Queue\n6.Exit from Program\n");
                  printf("Select any options ");
                  scanf("%d",&X);
                  switch (X)
                  {
                        case 1: IN_R();
                                    break;
                        case 2: IN_F();
                                    break;
                        case 3: DEL_F();
                                    break;
                        case 4: DEL_R();
                                    break;
                        case 5: display();
                                    break;
                        default: X=0;
                              break;
                  }
              }while (X!=0);
}
