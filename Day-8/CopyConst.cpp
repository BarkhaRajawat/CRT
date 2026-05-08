#include<iostream>
using namespace std;
//copy constructor
class Student{
    public:
    string name;
    int age;
    int roll_no;

    Student(string name, int age, int roll_no){
        this->name=name;
        this->age=age;
        this->roll_no=roll_no;
    }
        Student(Student &a)
        {
            name=a.name;
            age=a.age;
            roll_no=a.roll_no;
            cout<<name<<" "<<age<<" "<<roll_no<<endl;
        }
    
};

int main(){
    Student obj1("Barkha", 21, 2119);
    Student obj2(obj1);     //copy constructor create krna pdega wrna error aa jayega

    return 0;
}
