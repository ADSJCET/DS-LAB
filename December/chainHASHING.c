#include <stdio.h>
#include <stdlib.h>
#define TBLE 10

struct NODE{
       int VALUE;
       struct NODE *NEXT;
};
struct NODE *HEAD[TBLE] = { NULL }, *CHAIN;

void insert(){
    int KEY;
    printf("\n\tEnter Value ");
    scanf("%d",&KEY);
    int HASH = KEY % TBLE;

    struct NODE* newNODE = (struct NODE*)malloc(sizeof(struct NODE));
    
    newNODE->VALUE = KEY;
    newNODE->NEXT = NULL;
    if(HEAD[HASH] == NULL)
        HEAD[HASH] = newNODE;
    else{
    
        CHAIN = HEAD[HASH];
        while(CHAIN->NEXT != NULL){
           CHAIN = CHAIN->NEXT;
        }
        CHAIN->NEXT = newNODE;
    }
    printf("\tInsertion DONE!!\n");
}
void search(){
    int KEY;
    printf("\n\tEnter the KEY ");
    scanf("%d",&KEY);
    int INDEX = KEY % TBLE;
    if(HEAD[INDEX] == NULL)
        printf("\tElement not Found\n");
    else{
        CHAIN = HEAD[INDEX];
        int COL=1;
        while (CHAIN != NULL){
            if(CHAIN->VALUE == KEY){
                    printf("\tElement Found at %d INDEX at %d Column \n",INDEX,COL);
                    break;
                }
                CHAIN = CHAIN->NEXT;
                COL++;
        }
        if(CHAIN==NULL)
            printf("\tElement not Found\n");
    }
}
void display(){
    for(int i = 0; i < TBLE; i++){
        printf("\n\t[%d]-->",i);
        CHAIN =HEAD[i];
        while(CHAIN!=NULL){
             printf(" [%d]-->",CHAIN->VALUE);
             CHAIN=CHAIN->NEXT;
             }
          }
          printf("\n");
}
int main(){
       printf("\nChain Hashing\n");
       int c;
       do{
        printf("\n1.Insert\n2.Display\n3.Search\nChoice: ");
        scanf("%d",&c);
        switch(c){
            case 1:
                insert();
                break;
            case 2:
                display();
                break;
            case 3:
                search();
                break;
            default : c=0; 
       }
  }while(c!=0);
}
