#include<iostream>
using namespace std;

//Encapsulation/abstraction
class Student
{
    private:
    //properties
    string name;
    int age;
    int roll_no;

    public:
    void display(string name, int age, int roll_no)
    {
        string n = name;
        int a = age;
        int r = roll_no;
        cout<<name<<" "<<age<<" "<<roll_no;
    }

};

int main()
{

    Student obj;
    
    obj.display("Barkha", 21, 2119);
    return 0;

}