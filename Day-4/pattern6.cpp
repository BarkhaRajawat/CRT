#include <iostream>
using namespace std;

int main()
{
    int n=5;
    for(int row = 1; row<=5; row++ ){
        for(int space=1; space <= row-1; space++){
            cout<<" ";
        }
        
        for(int star=1; star<=n-row+1; star++){
            cout<<"*";
        }
        
        cout<<endl;
    }
}