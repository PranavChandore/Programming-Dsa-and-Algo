#include<iostream>
using namespace std;

int main(){

    int n, m;
    cin>>n >> m;

    int arr[n][m];


    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=i;j<m;j++){          
              //for j= i why because our row se column bada hona 
        //chahiye and hum sirf uper ke element travers karenge niche ke karenge toh kuch fyda nhi
            int temp = arr[i][j];  
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        
        }}

    cout<<"Ans Matrix is "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<< " ";
            
        }cout<<endl;

        
    }

    return 0;

}