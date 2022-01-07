#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string name = "pranav";

       /* // Convert lower into upper

    for(int i=0; i<name.length();i++)
    {
        if(name[i] >= 'a'&& name[i] <='z')
        name[i] -= 32;
    }

    cout<<name<<endl;

    // Convert upper to lower

    for(int i=0;i<name.size();i++){
        if(name >="A"  && name <= "Z")
            name[i] +=32;
    }

    cout<<name;
*/

     //   transform(name.begin(),name.end() ,name.begin(), ::toupper);

       // cout<<name<<endl;

    //Getting the gretest numberss
  //  string n= "6702840922";

    //sort(n.begin(),n.end(), greater<int>());

    //cout<<n<<endl;

// Calculating frequency in the strings

    string s= "ahjfhhfjfwruwoierhnkdf";
    
    int counter= 0;
    
    for(int i=0;i<s.size();i++)
    {
        
            if(s[i] == 'h' )
                counter++;
        
        
    }

    cout<<counter;
    
}