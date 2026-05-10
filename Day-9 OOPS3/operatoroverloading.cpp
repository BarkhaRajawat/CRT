#include<iostream>
using namespace std;

//operator overloading
class Complex
{
    int real;
    int img;

    //default constructor is created because ans m hum kuch value pass nhi kr rhe
    //complier wala default constructor tbhi call hota h jb program m ek bhi constructor na ho,
    //agr koi constructor h toh default constructor bhhi create krna pdega 
    public:
    Complex()
    {

    }

    Complex(int real, int img)
    {
        this->real = real;
        this->img = img;
    }

//jo operator use krnege wahi operator keyword k aage likhna h 
//operator keyword represent c1 and &c represent c2(pass by reference)
//jo call krta h usi ko original data member assign ho jate hote h 

    Complex operator + (Complex &c)
    {
        Complex ans;
        ans.real = real+c.real;
        ans.img = img +c.img;
    }
      
    void display()
    {
        cout<<real<<"+i"<<img<<endl;
    }
};

int main()
{
    Complex c1(3,2);
    c1.display();
    Complex c2(4,5);
    c2.display();

    //class is user defined isliye add bhi user ko hi krna pdega 
    //operator overloading m operator keyword ka use krte h 
    //will use copy constructor because we are passing object as parameter 
    Complex c3 = c1+c2;
    c3.display();
    return 0;
}