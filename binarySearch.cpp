//bianry search
//in bianry sort we creating mid element and compare with key element 
//if key is less than mid then update s=mid+1;
//else if e=mid+1;
//
#include<iostream>
using namespace std;

int binarySearch(int arr[], int n, int key){
    int s=0;
    int e=n;
    int mid = (s+e)/2;

    while (s<=e)
    {
        if(arr[mid] == key){
            return mid;}
        else if(arr[mid]<key){
            e=mid-1;
        }else{
            s=mid+1;
        }
    }}


    void printArray(int arr[],int n){
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
    }

    int main(){

        int arr[]= {12, 45, 23, 51, 19, 8};
        int n= sizeof(arr)/sizeof(arr[0]);

       cout<< binarySearch(arr, n,51)<<endl;
        printArray(arr,n);

        return 0;
    }
    
