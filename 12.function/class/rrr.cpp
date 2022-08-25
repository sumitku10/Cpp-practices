#include<iostream>
using namespace std;
//#include<string>

class employee
{
    public:
    int id;
    char name[20];
    double salary;
    void setemployee(){
        cout<<"Enter the name :";
        cin>>name;
        cout<<"Enter the id :";
        cin>>id;
        cout<<"Enter the salary :";
        cin>>salary;
        cout<<endl;
    }

    void getemployee(){
        cout<<"name is "<<name<<endl;
         cout<<"id is " <<id<<endl;
          cout<<"salary is "<<salary<<endl;
        
    }
};

int main(){
    employee e1;
    e1.setemployee();
    e1.getemployee();
    return 0;
}