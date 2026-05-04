#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int num;
    cin>>num;

    int rem;
    int count = 0;
    while(n>0)
    {

    rem = n%10;
    if(count == num-1)
    {
        cout<<rem;
        break;
    }

count++;
n=n/10;
} 
    return 0;
}
