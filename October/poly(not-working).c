//to find the sparse matrix
#include<stdio.h>

struct poly {
		int coeff;
		int exp;
		};
void printPOLY(struct poly X[],int N)
{
      int d;
      printf("eqn is: ");     
      for (d=0;d<N;d++)
      {     
            	printf("%dX^%d",X[d].coeff,X[d].exp);
            	if (d!=N-1)
            	      printf(" + ");
            	
      }
      printf("\n");
      
}
void printExpo(struct poly X[],int N)
{     int d;
      for (d=0;d<N;d++)
      {           printf("\n");
            	printf("Coeffient of X: ");     
            	scanf("%d",&X[d].coeff);
            	printf("Exponential of X: ");                 	
            	scanf("%d",&X[d].exp);
            	
      }
      printPOLY(X,N);

}
      
      
int polyADD(struct poly X[],struct poly Y[],int A,int B,struct poly Z[])
{     int i,j,k;            
      for (i=0 , j=0, k=0;i < A || j < B;k++)
      {     
      if (X[i].exp > Y[j].exp)
            {
                  Z[k].exp= X[i].exp;
                  Z[k].coeff= X[i].coeff;
                  i++;
                
            }
            else if (X[i].exp < Y[j].exp)
            {
                  Z[k].exp = Y[j].exp;
                  Z[k].coeff = Y[j].coeff;
                  j++;
                 
                  
            }
            else if (X[i].exp == Y[j].exp)
            {
                  Z[k].exp = X[i].exp;
                  Z[k].coeff = X[i].coeff + Y[j].coeff;
                  i++;
                  j++;
   
                  
            }
        }
        return k;
}
      
      
      
      	
int main(){
      int n1,n2;
      printf("Enter Poly X1 Size: ");
      scanf("%d",&n1);
      struct poly X[n1];
      printExpo(X,n1);
      
      printf("Enter Poly X2 Size: ");
      scanf("%d",&n2);
      struct poly Y[n2];
      printExpo(X,n1);
      printf("\n");
      struct poly Z[n1+n2];
      int K = polyADD(X ,Y ,n1 ,n2 ,Z);
      printPOLY(Z,K);
      }
      
      
