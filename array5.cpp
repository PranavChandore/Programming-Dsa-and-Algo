#include<iostream>
using namespace std;


void reorder(int arr[], int index[],int n){
    int temp[n];
    for(int i=0 ; i<n; i++){
        temp[index[i]] = arr[i];
    }

    for(int i=0; i<n;i++){
        arr[i] = temp[i];

    }
}

int main(){
    int arr[]= { 50,40,70,60,90};
    int n =  sizeof(arr)/ sizeof(arr[0]);

    int index[]= {3,0,4,1,2};

    reorder(arr, index, n);

    cout<<" Reorderd is ";
        for(int i=0;i<n ;i++)
            cout<<arr[i]<<" ";

    
}

