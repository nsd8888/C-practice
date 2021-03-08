#include<iostream>
using namespace std;

class Number{

    int a;

    public:
       Number(){
           a=0;
       }

       Number(int num){

           a=num;
       }

       //creating a copy constuctor
       Number(Number &obj){

           cout<<"user defined copy constructor called"<<endl;
           a= obj.a;
       }

       void printdata()
       {
           cout<<"the value of a is "<<a<<endl;
       }
};


int main()
{
    Number x,y,z(115),z2;

    x.printdata();
    y.printdata();
    z.printdata();

   Number z1(z); //>>since the object z1 is creating in this line so that user defined copy constuctor is invoked
                 //>>if the user defined constructor is not present in the program then complier provide its own
                 //copy constructor (complier always provide default copy constructor)
   z1.printdata();

   z2=z; // >> since the object z2 is created already and we are assigning to their object
        //>> the user defined copy construtor is not invoked but the default copy construtor is invoked
   z2.printdata();

   Number z3=z; // since the object is being created in this line so that user defined copy construtor invoked
                //>>if the user defined constructor is not present in the program then complier provide its own
                //copy constructor (complier always provide default copy constructor)
   z3.printdata();




return 0;
}