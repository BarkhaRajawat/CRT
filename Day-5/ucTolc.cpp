#include<iostream>
using namespace std;

char toLowerCase(char ch){
    char c = ch+32;
    return c;
}

int main(){
    char ch;
    cin>>ch;
    cout<<toLowerCase(ch);
}