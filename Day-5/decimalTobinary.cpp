#include<iostream>
using namespace std;

int DecToBin(int n){
    int binary=0, place=1;
    
    while(n>0){
        int rem = n%2;
        binary=binary+(rem*place);
        place = place*10;
        n=n/2;
    }
    return binary;
}

int main(){
    int n;
    cin>>n;
    cout<<DecToBin(n);
}