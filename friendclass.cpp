#include <iostream>
using namespace std;
/* this is without friend function
class asses
{
    int a, b, s, p;

public:
   int m,n;
    void setdata(int m, int n);
    void getdata();
    void sumfunc(asses , asses );
};
void asses::setdata(int m, int n)
{

    a = m;
    b = n;
}

void asses::getdata()
{

    cout << "the complex number is " << a << " + " << b << "i" << endl;
}

void asses:: sumfunc(asses o1, asses o2)
{
     //a=(o1.a + o2.a);
     //b=(o1.b + o2.b); 
    cout << "the sum of two complex number is " <<(o1.a + o2.a) << "+" << (o1.b+o2.b) << "i" << endl;
}

int main()
{
    asses o1,o2,o3;

    o1.setdata(1, 10);
    o1.getdata();
    o2.setdata(10, 15);
    o2.getdata();
    o3.sumfunc(o1, o2);
    //o3.getdata();
    return 0;
}*/


/******* this is with friend function***********/

class asses
{
    int a, b;
  friend void sumfunc(asses , asses );
public:
   int m,n;
    void setdata(int m, int n);
    void getdata();

};
void asses::setdata(int m, int n)
{

    a = m;
    b = n;
}

void asses::getdata()
{

    cout << "the complex number is " << a << " + " << b << "i" << endl;
}

void sumfunc(asses o1, asses o2)
{
     //a=(o1.a + o2.a);
     //b=(o1.b + o2.b); 
    cout << "the sum of two complex number is " <<(o1.a + o2.a) << "+" << (o1.b+o2.b) << "i" << endl;
}

int main()
{
    asses o1,o2,o3;

    o1.setdata(1, 10);
    o1.getdata();
    o2.setdata(10, 15);
    o2.getdata();
    sumfunc(o1, o2);
    //o3.getdata();
    return 0;
}