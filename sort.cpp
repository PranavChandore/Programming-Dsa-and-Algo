#include<iostream>
using namespace std;


void printarray(int arr[],int n){

    for(int i=0; i<n;i++){
        cout<<arr[i]<<" ";
    }
}



int main(){
    int arr[]= {20, 10, 30, 50, 60};
    int n = sizeof(arr)/ sizeof(arr[0]);

  revereseArray(arr, n);
  printarray(arr,n);
    return 0;
}