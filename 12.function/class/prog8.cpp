#include<iostream>
using namespace std;
#include<string>
class A
{
    public:
    A(){
        cout<<" constructor of a class "<<endl;

    }
};
class B{
    public :
    B(){
        cout<<" constructor of b class"<<endl;

    }
};
class c:public A,public B{
    public :
    c(){
        cout<<" constructor of c class"<<endl;

    }
};


int main()
{
  c obj;  
 return 0;
}