#include<iostream>
using namespace std;

class express{
    int a,b;
    public:
     void setdata(int i, int j){
         a=i;
         b=j;
     }

     void getdata(){
         cout<<"the value of a is "<<a<<endl;
         cout<<"the value of b is "<<b<<endl;
     }
};

int main(){
    /*
    express c;
    express* ptr = &c;
    (*ptr).setdata(10,15);
    (*ptr).getdata();
    */
/*
   express c;
   express*ptr= &c;
   ptr->setdata(10,15);
   ptr->getdata();
*/

 /*
 express *ptr= new express;
 ptr->setdata(10,15);
 ptr->getdata();
*/


/****this is the array of objects of class ****/
int i,p,q;
express *ptr= new express[3];
express *ptrcount= ptr;

for(int i=0; i<3; i++){
cout<<"enter the vaue of p and q for object "<<i+1<<endl;
cin>>p>>q;
ptr->setdata(p,q);
ptr++;
}
    return 0;
}