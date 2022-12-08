#include<stdio.h>
#include<stdlib.h>
struct treeNODE{
       int DATA;
       struct treeNODE *Lchild;
       struct treeNODE *Rchild;
};

//int count = 1;
struct treeNODE *ROOT = NULL;

struct treeNODE* insert(struct treeNODE* ROOT , int DATA){
       struct treeNODE* newNODE ;
       if (ROOT == NULL){
              newNODE = (struct treeNODE*) malloc(sizeof(struct treeNODE));
              newNODE -> DATA = DATA;
              newNODE-> Lchild = newNODE-> Rchild = NULL;
              ROOT = newNODE;
              //count++;
       }
       else {
              int DIR;
              printf("Left or Right (1/0) : ");
              scanf("%d",&DIR);
              if (DIR == 1){
                     ROOT-> Lchild = insert(ROOT-> Lchild , DATA);
              }
              else if (DIR == 0){
                     ROOT-> Rchild = insert(ROOT-> Rchild , DATA);
              }
              else printf("Wrong Direction\n");
       }
       //count++;
       return ROOT;
}

void inORDER (struct treeNODE* ROOT){
       if (ROOT != NULL){
              inORDER( ROOT-> Lchild );
              printf("\t%d", ROOT-> DATA );
              inORDER( ROOT-> Rchild );
       }
}


void preORDER (struct treeNODE* ROOT){
       if (ROOT != NULL){
              printf("\t%d", ROOT-> DATA );
              preORDER( ROOT-> Lchild );
              preORDER( ROOT-> Rchild );
       }
}


void postORDER (struct treeNODE* ROOT){
       if (ROOT != NULL){
              postORDER( ROOT-> Lchild );              
              postORDER( ROOT-> Rchild );
              printf("\t%d", ROOT-> DATA );
       }
}


int main (){
       int c, DATA;
       printf(">> Binary Tree <<\n");
       //printf("<<---and It Operations--->>\n");
       printf("\n");
       do {
              printf("\n1.Insert Element\n");
              printf(">> Traversal <<\n");
              printf("2.PREORDER\n3.INORDER\n4.POSTORDER\n");       
              printf("5.Exit\n");
              scanf("%d",&c);
              switch (c){
              case 1 : printf("Enter Element\n");
                       scanf("%d",&DATA);
                       ROOT = insert(ROOT,DATA);
                       break;
              case 2 : preORDER(ROOT);
                       break;
              case 3 : inORDER(ROOT);
                       break;
              case 4 : postORDER(ROOT);
                       break;
              default : c = 0;
              }      
       }while(c != 0);
}







//else {
  //            if (count %2 == 0)
    //                 ROOT-> Lchild = insert(ROOT-> Lchild , DATA);
      //        else
        //             ROOT-> Rchild = insert(ROOT-> Rchild , DATA);
//       }
