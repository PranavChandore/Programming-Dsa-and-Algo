//Selection sort 
/* in selection sort we find min element at set it to at begening
here one thing remember i=0;i<n-1;//
and int j=i+1 ;j<n;
 */

#include<iostream>
using namespace std;

void selectionSort(int arr[], int n){

    for(int i=0;i<n-1;i++){
        for(int j=i+1;i<n;j++){
            if(arr[i]<arr[j]){
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }

        }
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

       selectionSort(arr, n);
        printArray(arr,n);

        return 0;
    }
    
