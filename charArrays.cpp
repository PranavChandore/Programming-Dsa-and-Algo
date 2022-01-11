#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
/*
int main(){
    char arr[100] ="apple";
    int i=0;

    while (arr[i] != '\0' )
    {
        cout<<arr[i]<<endl;
        i++;
    }
    
}
*/

/*int main(){
    char arr[100];

    cin>>arr;

    cout<<arr;
}
*/
/*//check palindrome 
int main(){
    int n;
    cin>>n;

    char arr[n+1];
    cin>>arr;


    bool check =1;

    for(int i=0;i<n;i++){
        if(arr[i] != arr[n-1-i]){

            check =0;
            break;
        }
    }

if(check == true)
    cout<<"Word is palindrome"<<endl;

else{
    cout<<"not palindrome"<<endl;
}
return 0;
} */

//Largest word in palindrome

int main(){
    int n;
    cin>>n;
    cin.ignore();

    char arr[n+1];

    cin>>getline(arr, n);

    cin.ignore();
    int i=0;
    int curr_length=0;
    int max_length =0;
    int st=0, max_st=0;
    while(1){
    for(int i=0;i<n-1;i++){

        if(arr[i] == ' ' || arr[i] = '\0'){   /*here if space is occured also '\0' occured then also chek fruther*/
            if(curr_length > max_length){
                max_length= curr_length;
                max_st = st;
            }
             /*// for next word current length must be zero to calculate length*/
            curr_length=0;
            st = i+1;
        }
        else
        curr_length ++;
    

    if (arr[i] = '\0')
        break;

        i++;
    }

    }
    cout<<max_length;
    for(int i=0;i<max_length;i++)
        cout<<arr[i+max_st];

    return 0;
}
