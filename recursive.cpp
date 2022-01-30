#include<iostream>
using namespace std;


int power(int n,int p){

    if (p==0){
        return 1;
    }


    int prePower = power(n, p-1);
    return n*prePower;
}

int fact(int n){


    if(n == 0){
        return 1;
    }


    int prevFact = n*fact(n-1);

    return prevFact;
}

int fabn(int n){

    if(n==0 || n==1){
        return n;
    }

    return fabn(n-1)  + fabn(n-2);
}


int main(){


cout<<power(4,2)<<endl;


cout<<fact(5)<<endl;

cout<<fabn(5)<<endl;


return 0;




}