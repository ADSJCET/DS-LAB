#include <stdio.h>
#include <stdlib.h>
void maxHeapify (int arr[], int n, int i){
       int largest = i;
       int l = 2 * i + 1;
       int r = 2 * i + 2;
      
       if (l < n && arr[l] > arr[largest])
              largest = l;
       if (r < n && arr[r] > arr[largest])
              largest = r;
              
       if (largest != i){
              int temp = arr[largest];
              arr[largest] = arr[i];
              arr[i] = temp;
              maxHeapify(arr, n, largest);
       }
}
void HeapSort(int arr[], int n){
       int i;
       for (i = n/2 -1; i >= 0; i--)
              maxHeapify(arr, n, i);     
                      
       for (i = n-1; i >= 0; i--){
              int temp = arr[i];
              arr[i] = arr[0];
              arr[0] = temp;
              maxHeapify(arr, i, 0);
       }
}
void display (int arr[], int n){
       int i;
       for (i = 0; i < n; i++ ){
            printf("\t%d",arr[i]);
       }
       printf("\n");
}
int main(){
              int n,i;
              printf("Enter array limit : ");
              scanf("%d",&n);
              int arr[n];
              printf("Enter elements for array : \n");
              for (i = 0; i < n; i++ ){
                     scanf("%d",&arr[i]);
              }
              printf("\nBefore Sorting : ");
              display(arr, n);
              HeapSort(arr,n);
              printf("After Sorting : ");
              display(arr, n);
     
}
