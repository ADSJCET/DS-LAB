#include <stdio.h> 
#include <stdlib.h> 
#define MAX 3

int PQueue[MAX];
int Front=-1,Rear = -1,ITEM;

void Enqueue(){
       if (Rear == MAX - 1)
              printf("\nQueue Full\n");   
       else if (Front ==-1 && Rear ==-1){
              Front = Rear = 0;
              printf("\nEnter the value to Enqueue\n");
              scanf("%d",&ITEM);
              PQueue[Rear] = ITEM;
    }
    else{
            printf("\nEnter the value to Enqueue\n");
              scanf("%d",&ITEM);
              int i =Rear;
              while (i>=0 && PQueue[i] > ITEM)
              {
                     PQueue[i+1] = PQueue[i] ;
                     i--;
              }
              PQueue[i+1] = ITEM;
              Rear++;
       }
}

void display(){
      int i;
      for (i=Front; i<=Rear; i++)
        printf("\t %d",PQueue[i]);
}
void Dequeue(){
    if (Front==-1 && Rear==-1)
        printf("\nQueue Empty\n");
    else if (Front > Rear ){
      printf("\nQueue Empty, and Resetted\n");
      //ITEM= PQueue[Front];
      //printf("\nItem Removed: %d\n",ITEM);
          Rear = -1;
          Front = -1;
    }  
    else  printf("\nItem Removed: %d\n",  PQueue[Front++]);
}
int main()
      {
      int X=0;
      printf("Priority Queue Options\n");
            do {
                  printf("\n1.Enqueue\n2.Dequeue\n3.Display Queue\n4.Exit from Program\n");
                  printf("Select any options ");
                  scanf("%d",&X);
                  switch (X)
                  {
                        case 1: Enqueue();
                                    break;
                        case 2: Dequeue();
                                    break;
                        case 3: display();
                                    break;
                        default: break;
                  }
              }while (X==1 || X==2 || X==3);
}
