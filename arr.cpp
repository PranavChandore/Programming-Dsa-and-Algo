#include<iostream>
using namespace std;

int main(){

    int arr[5]={1,2,3,4,5};

    for(int i=0;i<5;i++){
       
       for(int j=i;j<5;j++){
           int temp= arr[j];
           arr[j] = arr[i];
           arr[i] = temp;
       }
    } 


    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}