#include<iostream>

using namespace std;

class complex{

    public:
     int var1=5;
    virtual void display(){
        cout<<"the value of var1 is "<<var1<<endl;
    }

     void sample(){
    
         cout<<"the value of var1 is "<<var1;
     }
};


class employee: public complex{

    public:
     int var2=10;
     void display(){
         cout<<"the value of the complex class variable"<<var1<<endl;
         cout<<"the value of the employee class variable"<<var2<<endl;
     }

     void func(){
         cout<<" the value of base calss variable "<<var1<<endl;
     }
};

class company: public complex{
    public:
     int var3=15;
     //void display(){
      //   cout<<"the value of the complex class variable"<<var1<<endl;
      //   cout<<"the value of the company class variable"<<var3<<endl;
     //}

     void func(){
         cout<<" the value of base calss variable "<<var1<<endl;
     }
};


int main(){
complex *ptr;
complex s1;
employee s2;
company s3;
ptr= &s3;

ptr->display();
    return 0;
}