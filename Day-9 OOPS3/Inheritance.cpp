#include<iostream>
using namespace std;

//inheritance

//Single inheritance 
class Human{
    //properties
    protected:
    string name;       //private, parent will not give to child, but can use PROTECTED instead to use the properties of parent clas 

};

class Student : public Human
{ 
    int roll_no;

    public:
    Student(string  n , int r)
    {  
        name = n;
        roll_no = r;
        
    }

void display()  //bara baar print n krwana pde isliye void display() banaya h 
{
    cout<<name<<" "<<roll_no<<endl;
}
};

int main(){
    Student obj("Barkha", 2119);
    obj.display();
}