#include<iostream>
using namespace std;

int main(){
    

    for(int row=1; row<=2*4-1; row++){

        if(row<=4){

             for(int col=1; col<=row; col++){
            cout<<col;
             }
            } else{
            for(int col=1; col<=2*4-row; col++){
                cout<<col;
            }
        }

        cout<<endl;
    }
}
