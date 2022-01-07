#include<iostream>
using namespace std;

class student {
    string name;//by defualt its private
    //uses for accsess 
    public:
    int age;
    bool gender;

    student(){
        cout<<"Defualt constructor"<<endl;
    }

    student(string s,int a,bool g){
        cout<<"Parameterised constructor"<<endl;
        name = s;
        age =a;
        gender =g;
    }//constructor

    student (student &a){
        cout<<"copy constructor"<<endl;
        name = a.name;
        age = a.age;
        gender= a.gender;
    }

    void setName(string s){
        name = s;// genreally whats happend is there name is attribute is there so its store string vlaue in there which pass as object in main method
    }

    void getName(){
        cout<<"Name is = "<<endl;
    }

    void printinfo(){
        cout<<"Name is = "<<name<<endl;
        cout<<"Age is = "<<age<<endl;
        cout<<"Gender is = "<<gender<<endl;
    }


    bool operator == (student &a){
        if(name== a.name && age == a.age && gender==a.gender){
            return true;
        }return false;
    }

};
int main(){
  /* student arr[3] ;//array of objects 
    
    for(int i=0 ; i<3; i++){
        string s;//c
        
        cout<<"Enter a name = "<<endl;
        cin>>s;//string value which enters by user
        arr[i].setName(s);//passing string and calling to the string
        cout<<"Enter age ="<<endl;
        cin>>arr[i].age;
        cout<<"Enter Gender type = "<<endl;
        cin>>arr[i].gender;
    }

    for(int i=0;i<3;i++){
       arr[i].printinfo();
    }
*/
    student a("pranav", 21, 1);

    a.printinfo();
   /* student b;
    student c = a;

    if(c == a){
        cout<<"Same"<<endl;
    }else{
        cout<<"Not same"<<endl;
    }


*/








    return 0;

}