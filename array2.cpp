#include<iostream>
using namespace std;

int countNumberofRotation(int arr[],int n){
       int min = arr[0], min_index;
    for(int i=0; i<n ;i++){
          if (min > arr[i]){
              min = arr[i];
            min_index = i;
        }

}
return min_index;
}


void leftRotationbyOne(int arr[], int n){
    int temp = arr[0];
    for (int i=0 ;i<n-1;i++)
        arr[i]= arr[i+1];
    arr[n-1] = temp;
    
}
void printarray(int arr[], int n){
    for (int i=0 ;i<n ;i++ ){
        cout<<arr[i]<<" ";
    }
}


int main(){
    int arr[] = {11, 21, 4, 3, 25, 26};
    int n= sizeof( arr)/sizeof( arr[0]);

    cout<<countNumberofRotation(arr, n)<<endl;
    leftRotationbyOne(arr , n);
    printarray(arr , n);
   
    return 0;

}