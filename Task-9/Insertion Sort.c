#include <stdio.h>
void insertion_sorting(int a[],int n);
void printArr(int a[], int n);

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);

   insertion_sorting(arr,n);
   printArr(arr,n);
}

void insertion_sorting(int a[],int n){
  int i,j,k;
    for(i=1;i<n;i++){
        j=i-1;
        k=a[i];
       while(j>=0 && a[j]>k){
            a[j+1]=a[j];
            j--;
         }
        a[j+1]=k;
    }
}

void printArr(int a[], int n){
    for(int i=0;i<n;i++)
        printf("%-4d",a[i]);
    printf("\n");
}
