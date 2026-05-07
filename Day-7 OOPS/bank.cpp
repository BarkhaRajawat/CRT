#include<iostream>
using namespace std;

class Bank{
    public:
    string name;
    int acc_no;
    int balance;

    Bank(){
    cout<<"default"; //default constructor 
    }
    

    //parametrized
    Bank(string n, int a, int b){
        name=n;
        acc_no=a;
        balance=b;

     cout<<name<<" "<<acc_no<<" "<<balance<<endl;
    }


    //this
 Bank(string name, int acc_no, int balance){
    this->name=name;
    this->acc_no=acc_no;
    this->balance=balance;

    cout<<name<<" "<<acc_no<<" "<<balance<<endl;

 }
}; 



int main(){
    Bank obj("Barkha", 10123, 1000);
}