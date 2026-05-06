#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    for(int row=1; row<=n; row++){
        if(row%2==0){
            cout<<"*";
        }else{
            for(int col=1; col<=n; col++){
                cout<<"*";
            }
        }
        cout<<endl;

    }
}