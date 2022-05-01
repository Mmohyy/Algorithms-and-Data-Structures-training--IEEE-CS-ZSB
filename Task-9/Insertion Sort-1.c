#include <stdio.h>
void printArr(int a[], int n);

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);

   
    int j=n-1;
    int value= arr[j];
    while(value < arr[j-1]) {
        arr[j] = arr[j-1];
        j--;
        printArr(arr,n);
    }
    arr[j] = value;
    printArr(arr,n);

}

void printArr(int a[], int n){
    for(int i=0;i<n;i++)
        printf("%-4d",a[i]);
    printf("\n");
}
