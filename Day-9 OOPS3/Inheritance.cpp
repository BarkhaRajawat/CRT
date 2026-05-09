// #include<iostream>
// using namespace std;

// //Single inheritance 
// class Human{
//     //properties
//     protected:
//     string name;       //private, parent will not give to child, but can use PROTECTED instead to use the properties of parent clas 

// };

// class Student : public Human
// { 
//     int roll_no;

//     public:
//     Student(string  n , int r)
//     {  
//         name = n;
//         roll_no = r;
        
//     }

// void display()  //bara baar print n krwana pde isliye void display() banaya h 
// {
//     cout<<name<<" "<<roll_no<<endl;
// }
// };

// int main(){
//     Student obj("Barkha", 2119);
//     obj.display();
// }




//  #include<iostream>
//  using namespace std;

// multi-level inheritance 
//  class Human{
//      //properties
//      protected:
//      string name;       //private, parent will not give to child, but can use PROTECTED instead to use the properties of parent clas 

//  };


//  class Person : public Human{
//     protected:
//     int age;
//  };


//  class Student : public Person
//  { 
//      int roll_no;

//      public:
//      Student(string  n , int a, int r)
//      {  
//          name = n;
//          roll_no = r;
//          age = a;
        
//      }

//  void display()  //bara baar print n krwana pde isliye void display() banaya h 
//  {
//      cout<<name<<" "<<age<<" "<<roll_no<<endl;
//  }
//  };

//  int main(){
//      Student obj("Barkha", 21, 2119);
//      obj.display();
//  }




 //MULTIPLE INHERITANCE
//  #include<iostream>
//  using namespace std;

//  class Human{
//      //properties
//      protected:
//      string name;       //private, parent will not give to child, but can use PROTECTED instead to use the properties of parent clas 

//  };


//  class Person{
//     protected:
//     int age;
//  };


//  class Student : public Human, public Person
//  { 
//      int roll_no;

//      public:
//      Student(string  n , int a, int r)
//      {  
//          name = n;
//          roll_no = r;
//          age = a;
        
//      }

//  void display()  //bara baar print n krwana pde isliye void display() banaya h 
//  {
//      cout<<name<<" "<<age<<" "<<roll_no<<endl;
//  }
//  };

//  int main(){
//      Student obj("Barkha", 21, 2119);
//      obj.display();
//  }



//HIERARCHIAL 
 #include<iostream>
 using namespace std;

//inheritance

// //Single inheritance 
 class Human{
     //properties
     protected:
     string name;      //private, parent will not give to child, but can use PROTECTED instead to use the properties of parent clas 
     int age;
 };


 class Student1 : public Human{
    protected:
    int age;
 };


 class Student2 : public Human
 { 
     int roll_no;

     public:
     Student2(string  n , int a, int r)
     {  
         name = n;
         roll_no = r;
         age = a;
        
     }

 void display()  //bara baar print n krwana pde isliye void display() banaya h 
 {
     cout<<name<<" "<<age<<" "<<roll_no<<endl;
 }
 };

 int main(){
     Student2 obj("Barkha", 21, 2119);
     obj.display();
 }




