#include<iostream>
using namespace std;



bool checkEven(int n){
    return  (n && !(n & n-1));
}

int numberofOnes(int n){
    int count =0;

    while(n !=0){
        n= n & (n-1);
        count ++;
    }
    return count;
}

int main(){


    cout<< checkEven(16)<<endl;

   cout<<numberofOnes(19);



    return 0;
}