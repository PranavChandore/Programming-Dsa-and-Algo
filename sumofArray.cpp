//Calculating sum of first three element ?
//
#include<iostream>
using namespace std;

int  sumofarray(int arr[],int n){

    int sum = 0;
    for(int i=0;i<4;i++){
        sum+= arr[i];
    }
    return sum;
}
        
    


int main(){
    int arr[]= {20, 10, 30, 50, 60};
    int n = sizeof(arr)/ sizeof(arr[0]);

cout<<sumofarray(arr, n);
    return 0;
}