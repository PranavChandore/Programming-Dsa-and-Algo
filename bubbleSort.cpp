//Bubble sort

//L > R = Then its wrong order

//Bubble sort repetedly swapping two adjecent element is called bubble sort
//first element is arr[i] and adjecent is arr[i+1];

/* Main thing is rember here pranav 
    Here we go to the n- ith iteration for sorting an array

        i<n= n-i;//

        for the less than size one iteration we use Counter counter is set t o counter <n

        */

#include<iostream>
using namespace std;

void bubbleSort(int arr[], int n){
    int counter=1;
    while (counter<n){
    for(int i=0;i<n-counter;i++){// counter is set to n-ith iteration rember here we always go n-ith 
    // iteration in Bubble Sort
        
            if(arr[i]>arr[i+1]){  // for just desc then > than replaced by < viceversa
                int temp = arr[i];
                arr[i] =arr[i+1];
                arr[i+1] = temp;
            }
        
        
    }counter++;
}}


    void printArray(int arr[],int n){
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
    }

    int main(){

        int arr[]= {12, 45, 23, 51, 19, 8};
        int n= sizeof(arr)/sizeof(arr[0]);

        bubbleSort(arr, n);
        printArray(arr,n);

        return 0;
    }
    
