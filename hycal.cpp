#include<iostream>
#include<cmath>

using namespace std;

class simplecalc{

    protected:
       double a,b,u,x,y,z;
    

       public:
        int m,n;
            //void enterdata();
            //void setdata();
            void perform(int,int);

};

/*void simplecalc::enterdata(){
        cout<<"enter value of a and b"<<endl;
        cin>>a;
        cin>>b;

}
void simplecalc::setdata(){

m=a;
n=b;
}*/


void simplecalc::perform(int m, int n){

    x= (m+n);
    y= (m*n);
    z= (m/n);
    u= (m-n);

}
 

class scientific{

       protected:
       float d,e,f,s;

        public:
        void values();
        void geometry();
};
void scientific::values(){
    cout<<"enter the valu of s "<<endl;
  cin>>s;
}
void scientific:: geometry(){

    cout<<"the value of sine function is "<<sin(s)<<endl;
    cout<<"the value of exponemtial is "<<exp(s)<<endl;
    cout<<"the value of cos function is "<<cos(s)<<endl;
}


class hybrid: public simplecalc, public scientific{

    public:

    void display();
};


void hybrid::display(){


geometry();
cout<<"the addition of a and b is "<<x<<endl;
cout<<" the substraction of a and b is "<<u<<endl;
cout<<"the multiplication of a and b is "<<y<<endl;
cout<< " the value of a divided by b is "<<z<<endl;
}


int main(){

hybrid result;
//result.enterdata();
//result.setdata();
result.perform(10,20);
result.values();
result.display();

return 0;
}