#include<iostream>
using namespace std;

int main(){
    int n =123;
    int sum=0;

    while(n>0){
        int rem = n%10; 
        if(rem%2==0){     //even number
            sum = sum+rem;
        }
        n=n/10;
    }
    cout<<sum;

}