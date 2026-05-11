//run-time polymorphism is virtual function 
//runtime works on logic

//


#include<iostream>
using namespace std;

class Human
{
    void display()
    {
        cout<<"human"<<endl;
        }
};

class Person: public Human{
    
} 
int main()
{
    Human h;
    h.display();
    return 0;
}