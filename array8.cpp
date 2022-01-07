#include<iostream>
using namespace std;

void selection_sort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            int temp=arr[j];
            arr[j]= arr[i];
            arr[i]= temp;
        }
    }
}
  

void print_array(int arr[], int n){
    for(int i=0; i<n;i++)
        cout<<arr[i]<<" ";
}

int main(){
    int arr[]= {21, 10, 50, 36, 40};
    int n = sizeof(arr)/sizeof(arr[0]);

    selection_sort(arr, n);
    print_array(arr, n);

}