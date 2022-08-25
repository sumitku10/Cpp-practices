
// decendent cleass
#include<iostream>
using namespace std;
//#include<string>

class student{
    char name[50];
    int roll;
    public:
    void get(){
        cout<<"Enter your name : ";
        cin>>name;
        cout<<"Enter your roll no : ";
        cin>>roll;
    }
    void show(){
        cout<<name<<endl;
        cout<<roll<<endl;
    }
};
class academic:public student{
    int mark;
    public:
    void get(){
        student ::get();
        cout<<"Enter mark : ";
        cin>>mark;
    }
    void show(){
        student ::show();
        cout<<mark;
   }
};
int main()
{
   academic a1;
   a1.get();
   a1.show();
   
 return 0;
}