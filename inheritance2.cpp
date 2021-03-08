#include <iostream>
#include<math.h>

using namespace std;

class simplecal
{
protected:
    int a, b;

public:
    void setdata1(float num1,float num2){
        a=num1;
        b=num2;
    }
    void getdata1()
    {
        cout << "the sum of two number " << (a + b) << endl;
        cout << "the multiplication of two number " << (a * b) << endl;
        cout << "the substration of two number " << (a - b) << endl;
        cout << "the division of two number " << (a / b) << endl;
    }
};

class scientificcalc
{
protected:
    int c;
    float d;

public:
float a_c,a_s,a_ln;
    void setdata2(int num1, float num2){
        c=num1;
        d=num2;
        a_c= cos(d);
        a_s=sin(d);
        a_ln=log(c);

    }
    void getdata2()
    {

        cout << "the coses value of a is " << a_c<< endl;
        cout << "the sine value of a is " << a_s<< endl;
        cout << "the log value of a is " << a_ln << endl;
    
    }
};

class hybrid : public simplecal, public scientificcalc
{

public:

    void display()
    {
        getdata1();
        getdata2();
    }
};

int main(){

    hybrid k;
    k.setdata1(2.14,15.14);
    k.setdata2(20,2.14);
    k.display();
return 0;
}