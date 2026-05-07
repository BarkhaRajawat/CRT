#include<iostream>
using namespace std;
//Student class

class Student
{
    //properties/data members
    public:
    //original data member
    string name;  
    int age;
    int roll_no;

    Student(int age, string name, int roll_no )  //local data member
    {
        this->age=age;
        this->name=name;
        this->roll_no=roll_no;
        cout<<age<<" "<<name<<" "<<roll_no<<endl;
    }
};
int main(){
    Student obj(10, "Barkha", 2119);
   
}