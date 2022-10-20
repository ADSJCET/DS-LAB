#include <stdio.h>
#define MAX 3
int R = -1, F = -1, ITEM, CQUEUE[MAX];
void enqueue(){

    if (F==-1 && R==-1){
      F = R = 0;
      printf("\nEnter the value to Enqueue\n");
      scanf("%d",&ITEM);
      CQUEUE[R] = ITEM;
    }
    else if ((R+1) % MAX == F)
        printf("\nCQueue Full\n");   
    else{
         R = (R+1) % MAX;
         printf("\nEnter the value to Enqueue\n");
         scanf("%d",&ITEM);
         CQUEUE[R] = ITEM;
        }
}

void dequeue(){
    if (F==-1 && R==-1)
        printf("\nCQueue Empty\n");
    else if (F == R){
        printf("\nItem Removed: %d\n",  CQUEUE[F]);
        R = F = -1;
    }
    else
    {
        printf("\nItem Removed: %d\n",  CQUEUE[F]);
        F = ( F+1) % MAX;
    }
}
void display()  
{  
    int i = F;
    if(F == -1 && R == -1)  
    {  
        printf("CQueue Empty\n.");  
    }  
    else{
            while(i != R)  
            {  
                printf("\t %d", CQUEUE[i]);  
                i=(i+1) % MAX;  
            }
            printf("\t %d", CQUEUE[i]);
        }
    
}  
int main()
      {
      int X;
      printf("Circular Queue Options\n");
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
                        default: X=0;
                                    break;
                  }
              }while (X!=0);
}
