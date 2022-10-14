//to find the sparse matrix
#include<stdio.h>

struct mark {
		int row,col,value;
		};
	
int main(){
	int n;
	printf("enter the square matrix size: ");
	scanf("%d",&n);
	
	int matrix[n][n];
	printf("enter the elements for matrix: \n");
	int i,j;
	for (i=0; i<n; i++){
			for (j=0; j<n; j++){
			   	scanf("%d",&matrix[i][j]);   
			   	}
			}
	struct mark rep[n+n];
	int k=0;
	for (i=0; i<n; i++){
			for (j=0; j<n; j++){
                        if (matrix[i][j] != 0){
                              rep[k].row = i;
                              rep[k].col = j;
                              rep[k].value = matrix[i][j];
                              k++;
			   	}
			}
		}
	printf("\n\n");
      for (i=0; i<n; i++){
			for (j=0; j<n; j++){
                        printf("%d\t",matrix[i][j]);
            }
            printf("\n");
      }

	printf("\n\narray size = %d\n\n",k);
	printf("ROW (%d)\tCOL (%d)\tVALUE (%d)\n",n,n,k);
	for (i=0; i<k; i++){
	     printf("%d\t %d\t %d\n",rep[i].row,rep[i].col,rep[i].value);   
	     }
}
