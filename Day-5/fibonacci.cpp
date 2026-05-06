#include<iostream>
using namespace std;
 
void fibonacci(int n){
    if(n==1){cout<<0;}
    else if(n==0){cout<<0<<" "<<1;}
        else{
            int a=0, b=1;
            int i=3;
            while(i<=n){
                int c= a+b;
                cout<<c;
                c=b;
                b=a;
                i++;
            }
        }
        }

int main(){
    int n;
    cin>>n;
    fibonacci(n);
}
