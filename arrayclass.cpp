#include<iostream>
using namespace std;

class employee
{
     static int count;
    int ID, salary, name;
    public : 
    
    void setname(void);
    void getdata(void);
};
void employee::setname()
{

    cout << "enter the name of employee" << endl;
    cin >> name;
    count++;
}

void employee::getdata()
{
    cout << "enter the id of the employee" << endl;
    cin >> ID;

    cout << "enter salary of employee" << endl;
    cin >> salary;

    
}
int employee:: count;
int main()
{
    int i;
    employee fb[10];

    for(i = 0; i<=10; i++)
    { 
        fb[i].setname();
        fb[i].getdata();
    }
    return 0;
}
