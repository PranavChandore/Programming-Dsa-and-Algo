#include<iostream>
using namespace std;

class A{
    public:
    int a;
    

    void functionA(){

        cout<<"FunctionA";
    }

private:
void functionB(){
    cout<<"FunctionB";
}
};
int main(){
    A a;
    a.functionA();

  

    return 0;
}






















