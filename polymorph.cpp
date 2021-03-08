#include<iostream>

using namespace std;

class complex{

    public:
     int var1;
     void display(){
         cout<<"the value of the base class variable"<<var1<<endl;
     }

     void sample(){
         cout<<"the value of var1 is "<<var1;
     }
};


class employee: public complex{

    public:
     int var2;
     void display(){
         cout<<"the value of the complex class variable"<<var1<<endl;
         cout<<"the value of the employee class variable"<<var2<<endl;
     }

     void func(){
         cout<<" the value of base calss variable "<<var1<<endl;
     }
};


int main(){
    
/*
        complex obj1; // create object of complex class
        complex *ptr; //crete the pointer of complex calss....ie the pointer is of type complex data type
        
        employee obj2;// the object of employee class

        ptr= &obj2;  // pointing thye complex type pointer to employee type object (obj2)
        ptr->var1= 10;
        ptr->var2=100; //throw the error
        ptr->display();// inoke the complex class display function
        //ptr->func();// will throw an error because the func() is not member of class complex

        /*  Note:
           
         //here the function call is depend on the type of pointer and not the type of object towards
            toword it pointening.
  
        //here we know that which function is going to execute but the binding is done in run time (dynamic binding)
          */

  /*    
complex obj1;
employee *ptr;

employee obj2;
  ptr= &obj2;
  ptr->var1=100; //will not shows error bcz the its the base class and derived publically
ptr->var2=10;
ptr->display();//runs the employee display()
ptr->sample();  
*/
complex obj1;
employee obj2;
employee *ptr;

ptr= &obj2; // throws an error 
    return 0;
}