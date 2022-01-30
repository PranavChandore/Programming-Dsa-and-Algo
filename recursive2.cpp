#include<iostream>
using namespace std;

// Cheack if an array is sorted or not

/*bool sorteda(int arr[], int n){

    if (n == 1);
    {
        return true;
    }

    int restArray = sorteda(arr+1, n-1);
    return  (arr[0] < arr[1] && restArray);

    
}

*/

//print decresing in order
void dec(int n){
    if(n==0){
        return;
    }

    cout<<n<<endl;
    dec(n-1);
}

void incre( int n){
    if(n ==0){
        return;
    }

    incre(n-1);
    cout<<n<<endl;
}

//Find first and last number occurencess in an array


int firstOccurence(int arr[], int n ,int i ,int key){

    if(i == n){
        return -1;
    }

    if(arr[i] == key){
        return i;
    }

    return firstOccurence(arr, n , i+1, key);

}

int lastocuurence(int arr[], int n , int i,int key){
    if(i == n){
        return -1;
    }

    int restArray = lastocuurence(arr , n , i+1, key);
    if(restArray != -1){
        return restArray;
    }



    if(arr[i] == key){
        return i;
    }
    return -1;
}



int main(){

    int arr[]= { 40,50,70,60,90};
    int n =  sizeof(arr)/ sizeof(arr[0]);


   // cout<<sorteda(arr, n)<<endl;

    dec(5);
    incre(4);
cout<<firstOccurence(arr, n, 0, 5)<<endl;
cout<<lastocuurence(arr,n, 0,60);
    return 0;
}