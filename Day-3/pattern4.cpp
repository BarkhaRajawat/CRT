#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    for(int row=1; row<=5; row++){
        for(int col=1; col<=5; col++){
        if(row==0 || row==1 || col==0 || col==1){
            cout<<"*";
        }else{
            cout<<" ";
    }
    cout<<endl;
}
    }