#include<iostream>
using namespace std;


int secound_largest(int arr[],int n){
int temp = arr[0];
for(int i=0;i<n-1 ; i++){
    if(temp>arr[i])
      arr[i]=arr[i+1];
      arr[i+1]= temp;
 
}

}

int main(){
    int arr [] = {10,40,60, 30, 70,20};
    int n = sizeof(arr)/sizeof( arr[0]);

  cout<<"largest element is"<<secound_largest(arr, n);
  return 0;
}