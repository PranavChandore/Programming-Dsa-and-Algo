// insertion sort
/* in insertion sort 
Insert an element from unsorted array to its correct postion in sorted array 

first element  assumed it sorted and next form j=0;j< n is an unsortedArray
   // here also      REMEMBER ONE THING WE USE CURRENT ELEMENT  = ARR[J];

if find min element then it shift to at beggening position there we use arr[j+1] =temp;

*/

#include<iostream>
using namespace std;

void insertionSort(int arr[],int n){

    for(int i=1;i<n;i++){
        int j = i-1;
        int current = arr[i];

        while (arr[j]> current && j>=0)
        {
            
            arr[j+1]= arr[j];
            j--;
        }
        
        arr[j+1] = current;
    }
}
  
  
    void printArray(int arr[],int n){
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
    }

    int main(){

        int arr[]= {12, 45, 23, 51, 19, 8};
        int n= sizeof(arr)/sizeof(arr[0]);

        insertionSort(arr, n);
        printArray(arr,n);

        return 0;
    }
    
