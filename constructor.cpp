#include<iostream>
using namespace std;
/*****this program shows there shoud be one constructor which not do anything********/
/*
class complex{
  int a,m,n;

  public:

   complex(void){} //if it is not there then there will be an error.
   //this is because of the creating objects ob1,ob2,ob3.
   //if we will not create this first and the creating the object explicitly then there is no need to write this
   //this means there should be one constructor in each class that not doing anything (in this case)   
   complex(int x,int y,int z)
   {
       a=x;
       m=y;
       n=z;
   }
   complex(int x, int y, float Z){

       a=x;
       m=y;
       n=int(Z);
   }
   void printdata();
};

void complex::printdata(){

    cout<<"you are done";

}
int main()
{
 complex ob1,ob2,ob3;

 int x,y,z;
 float Z;

 cout<<"enter the values of x";
 cin>>x;
 cout<<"enter the values of y";
 cin>>y;
 cout<<"enter the values of z";
 cin>>z;
 ob1= complex(x,y,z);
 ob1.printdata();
return 0;
}
*/


/*********this shows another method which do not use the default constructor as above***********/
class complex{
  int a,m,n;

  public:

   complex(int x,int y,int z)
   {
       a=x;
       m=y;
       n=z;
   }
   complex(int x, int y, float Z){

       a=x;
       m=y;
       n=int(Z);
   }
   void printdata();
};

void complex::printdata(){

    cout<<"you are done";

}
int main()
{
 //complex ob1,ob2,ob3;

 int x,y,z;
 float Z;

 cout<<"enter the values of x";
 cin>>x;
 cout<<"enter the values of y";
 cin>>y;
 cout<<"enter the values of z";
 cin>>z;
 complex ob1= complex(x,y,z);
 ob1.printdata();
return 0;
}


