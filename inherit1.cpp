#include<iostream>

using namespace std;
/******this is publically derived******/
/* class base{
 int a;
 public:
  int b;
  void setdata();
  int getdata1();
  void getdata2();
};

void base::setdata(){
  a=100;
  b=120;
}

int base::getdata1(){
    return a;
}

void base:: getdata2(){
  cout<<"the value of b is "<<b<<endl;
}

class derived : public base{
  int c;
  public:
   void process();
   void display();
};

void derived::process(){
  
  c= b * getdata1();
}

void derived::display(){

  cout<<"the value of a is "<< getdata1()<<endl;
  cout<<"the value of b is "<<b<<endl;
  cout<<"the value of c is "<<c<<endl;
}


int main()
{
  derived derr;
  derr.setdata();
  derr.process();
  derr.display();

  return 0;
}
*/


/****this is privately derived******/


class base{
 int a;
 public:
  int b;
  void setdata();
  int getdata1();
  void getdata2();
};

void base::setdata(){
  a=100;
  b=120;
}

int base::getdata1(){
    return a;
}

void base:: getdata2(){
  cout<<"the value of b is "<<b<<endl;
}

class derived : private base{
  int c;
  public:
   void process();
   void display();
};

void derived::process(){
  setdata();
  c= b * getdata1();
}

void derived::display(){

  cout<<"the value of a is "<< getdata1()<<endl;
  cout<<"the value of b is "<<b<<endl;
  cout<<"the value of c is "<<c<<endl;
}


int main()
{
  derived derr;
  //derr.setdata(); //we cannot call setdata directly because the setdata is private now
  derr.process();
  derr.display();

  return 0;
}
