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

    //Method/behaviour
    void study()
    {
        cout<<name<<" is studying"<<endl;
    }
};
int main(){
    Student obj;
    //dot operator: access properties & methods of a class 
    obj.name = "Barkha";
    obj.age = 21;
    obj.study();

}