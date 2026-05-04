#include <iostream>
using namespace std;

int main()
{
    int n=5;
    for(int row = 1; row<=5; row++ ){
        for(int num=1; num<=5-row+1; num++){
            cout<<5-row+1;
        }
        
        for(int star=1;star<=row-1;star++){
            cout<<"*";
        }
        
        cout<<endl;
    }
}