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

    Student(int a, string s, int r )  //local data member
    {
        age=a;
        name=s;
        roll_no=r;
        cout<<age<<" "<<name<<" "<<roll_no<<endl;
    }
};
int main(){
    Student obj(10, "Barkha", 2119);
   
}