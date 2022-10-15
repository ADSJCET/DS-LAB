#include <stdio.h>
#define MAX 5
int TOP = -1, ITEM;
int STACK[MAX];

void POP()
{
    if (TOP == -1)
        printf("Stack Underflow\n");
    else
        printf("\nStack Popped: %d\n",STACK[TOP--]);
}

void PUSH()
{
    if (TOP == MAX - 1)
        printf("Stack Overflow\n");
    else
      {    printf("\nEnter the value to PUSH: ");
           scanf("%d",&ITEM);
           STACK[++TOP] = ITEM;
      }
}

int main()
      {
      int X=0;
      printf("Stack Options\n");
            do {
                  printf("\n1.PUSH\n2.POP\n3.Exit from Program\n");
                  printf("Select any options ");
                  scanf("%d",&X);
                  switch (X)
                  {
                        case 1: PUSH();
                                    break;
                        case 2: POP();
                                    break;
                        default: break;
                  }
              }while (X==1 || X==2);
}

