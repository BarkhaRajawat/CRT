#include<iostream>
using namespace std;
//Student class

class Student
{
    //properties/data members
    public:
    string name;
    int age;
    int roll_no;

    Student()
    {
        cout<<"Default constructor called"<<endl;
    }
};
int main(){
    Student obj;
   
}