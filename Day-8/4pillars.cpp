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
    void setter(string n, int a, int r)
    {
        name=n;
        age=a;
        roll_no=r;
    }

    int getter()
    {
        return age;
    }

};

int main()
{

    Student obj;
    obj.setter("Barkha", 21, 2119);
    cout<<obj.getter();
    return 0;

}