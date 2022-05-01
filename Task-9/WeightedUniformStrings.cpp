#include <iostream>
using namespace std;
void printArr(int a[], int n);

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];


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
        cout<< a[i]<<'  ';
    cout<<"\n";
}
