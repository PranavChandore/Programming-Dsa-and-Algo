#include<iostream>
using namespace std;

class student{
    public:
    int age;
    string name;
    bool gender;

};
int main(){
    int arr[3];
   for(int i=0;i<3;i++){
       cin>>arr[i];
       cout<<"Enter age =";
       cin>>arr[i].age;
       cout<<"Enter a Name =";
       cin>>arr[i].name;
       cout<<"Enter gender =";
       cin>>arr[i].gender;
   }
    return 0;
}