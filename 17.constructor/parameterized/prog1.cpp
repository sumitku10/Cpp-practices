#include<iostream>
using namespace std;
#include<string>
class Addition{
    int a,b,c;
    public:
    Addition(int x,int y){
        a=x;
        b=y;
    }
    void add(){
        c=a+b;
        cout<<"Sumi is = "<<c<<endl;
    }
};
int main()
{
    int x1,y2;
    cout<<"Enter the two number for addition : "<<endl;
    cin>>x1>>y2;
    Addition a1(x1,y2) ;  
    a1.add();
   
 return 0;
}