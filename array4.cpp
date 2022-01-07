#include<iostream>
using namespace std;

void arrangementOfanArray(int arr[],  int n){
    int count = 0;
     for(int i =0;i<n ; i++){
         if(arr[i]!= 0){
             arr[count++] = arr[i];
         }
     }

     for(int i = count; i<n-1 ;i++){
         arr[i] = 0;
     }
       
}    

void sortingTry(int arr[], int n){
    for(int i=0; i<n; i++){
        int temp = arr[0];
        if (temp >arr[i]){
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
    }
    for (int i=0;i<n ; i++){
        cout<< arr[i]<<" ";
    }
}
    

void printArray(int arr[], int n){
for(int i =0 ; i<n-1 ; i++)
    cout<<arr[i]<<" ";


}


int main(){
    int arr[]= {1,3,0, 0 ,2,3,0, 5};
    int n = sizeof(arr)/ sizeof(arr[0]);

    arrangementOfanArray(arr, n);
    printArray(arr, n);
    sortingTry(arr, n);
}