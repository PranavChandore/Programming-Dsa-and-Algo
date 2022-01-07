#include<iostream>
using namespace std;

void reverseArray(int arr[], int i,int j){
    int temp , i, j;
    while (i>j)
    {
        temp =  arr[i];
        arr[i]  = arr[j];
        arr[j]= temp;
        i++;
        j--;
        /* code */
    }
    
}

void printArray(int arr, int n){
    cout<<"Reversre Array"<<endl;
    for(int i=0;i<n; i++){
        cout<<arr[i]<<" ";

    }
}
int main(){
    int arr[]= { 1,2,3,4,5,6};
    
}