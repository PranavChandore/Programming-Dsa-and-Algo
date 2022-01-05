#include<iostream>
using namespace std;


void largest(int arr[], int n){
    int d,i;
    
    
        int temp = arr[0];
        for(int i=0;i<n ;i++)
        if(temp>arr[i]){
            temp = arr[i];

        
        }
    
    
}

        
    


int main(){
    int arr[]= {20, 10, 30, 50, 60};
    int n = sizeof(arr)/ sizeof(arr[0]);

  cout<< largest(arr, n);
    return 0;
}