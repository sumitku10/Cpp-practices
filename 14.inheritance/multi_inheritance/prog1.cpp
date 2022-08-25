#include<iostream>
using namespace std;
#include<string>

class student{
    char name[70];
    int roll;
    public:
    void get(){
        cout<<" Enter name : ";
        cin>>name;
        cout<<" Enter roll no : ";
        cin>>roll;
    }
    void show(){
        cout<<name<<endl;
        cout<<roll<<endl;
    }
};
class subject{
    public:
    subject() {}
};
class academic:public student,public subject{
    private:
    int mark;
    public:
    void get(){
        student::get();
        //subject::get();
        cout<<"Enter mark ";
        cin>>mark;
    }
    void show(){
        student::show();
        //subject::show();
        cout<<mark;
    }
};

int main(){
    academic a1;
    a1.get();
    a1.show();
 return 0;
}