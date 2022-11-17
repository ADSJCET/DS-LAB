#include <stdio.h>
#include <stdlib.h>

struct node {
       int data;
       struct node *next;
};
struct node *newNODE, *HEAD = NULL, *prev = NULL, *TEMP;

void insertionB (){
       newNODE = (struct node*)malloc(sizeof(struct node));
       if (HEAD == NULL){
              printf("\nEnter a Value to Insert ");
              scanf("%d",&newNODE->data);
              newNODE->next = NULL;
              HEAD = newNODE;
       }            
       else {
              printf("\nEnter a Value to Insert ");
              scanf("%d"  ,&newNODE->data);
              newNODE->next = HEAD;
              HEAD = newNODE ;
            }

}


void insertionE (){
       newNODE = (struct node*)malloc(sizeof(struct node));
       if (HEAD == NULL){
              printf("\nEnter a Value to Insert ");
              scanf("%d"  ,&newNODE->data);
              newNODE->next = NULL;
              HEAD = newNODE;
       }      
       else {
              TEMP = HEAD;
              while(TEMP->next != NULL)
                     TEMP = TEMP->next;
              printf("\nEnter a Value to Insert ");
              scanf("%d",&newNODE->data);
              TEMP->next = newNODE;
              newNODE->next = NULL ;
            }
}

void insertionPOS (){
       newNODE = (struct node*)malloc(sizeof(struct node));
       if (HEAD == NULL){
              printf("\nEnter a Value to Insert ");
              scanf("%d"  ,&newNODE->data);
              newNODE->next = NULL;
              HEAD = newNODE;
       }
       else {
              int POS,i;
              printf("\nEnter Position ");
              scanf("%d",&POS);
              TEMP = HEAD;
              for (i=1,POS--; i<POS; i++)
                     TEMP = TEMP->next;
              printf("\nEnter a Value to Insert ");
              scanf("%d"  ,&newNODE->data);
              
              newNODE->next = TEMP->next;
              TEMP->next = newNODE;
       }
}

void deletionB (){
       if (HEAD == NULL)
              printf("\nList Empty\n");
       else {
              TEMP = HEAD;
              HEAD = HEAD->next;
              printf("\nRemoved element %d\n",TEMP->data);
              free(TEMP);
       }
}

void deletionE (){
       if (HEAD == NULL)
              printf("\nList Empty\n");
       else if (HEAD->next == NULL){
       TEMP = HEAD;
       printf("\nRemoved element %d\n",TEMP->data);
       free(TEMP);
       }
       else {
              TEMP = HEAD;
              while(TEMP->next != NULL){
                     prev = TEMP;
                     TEMP = TEMP->next;  
              }
              printf("\nRemoved element %d\n",TEMP->data);
              prev->next = NULL;
              free(TEMP);
       }
}

void deletionPOS (){
       if (HEAD == NULL)
              printf("\nList Empty\n");
       else {
              TEMP = HEAD;
              int POS,i;
              printf("\nEnter Position ");
              scanf("%d",&POS);
              TEMP = HEAD;
              for (i=0,POS--; i<POS; i++){
                     prev = TEMP;
                     TEMP = TEMP->next;
              }
              printf("\nRemoved element %d\n",TEMP->data);                   
              prev->next = TEMP->next;
              free(TEMP);
       }
}

void display(){
       if (HEAD == NULL)
              printf("\nList Empty\n");
       else {
              TEMP = HEAD;
              while(TEMP != NULL){
                     printf("\t%d->",TEMP->data);
                     TEMP = TEMP->next;
              }
       }
}

int main (){
       
       printf("\nLinked List Operation");
       int c;
       do{
              printf("\n1.Create List\n2.Insertion at BEGINNING\n3.Insertion at END\n4.Insertion at A POSITION");
              printf("\n5.Deletion at BEGINNING\n6.Deletion at END\n7.Deletion at A POSITION");
              printf("\n8.Display\nType any options ");
              scanf("%d",&c);
              switch(c){
                     
                     case 1 : insertionE();;
                                   break;
                     case 2 : insertionB ();
                                   break;
                     case 3 : insertionE ();
                                   break;
                     case 4 : insertionPOS ();
                                   break;
                     case 5 : deletionB();
                                   break;
                     case 6 : deletionE();
                                   break;
                     case 7 : deletionPOS();
                                   break;
                     case 8 : display();
                                   break;
                     default : c=0; 
                                   break;
              }
       }while(c!=0);
}





