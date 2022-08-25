#include<iostream>
using namespace std;
#include<string>

class sample{
    int a,b;
    public:
    sample(){
        a=10;
    }
    sample(int x){
        a=x;
    }
    void show(){
        cout<<"a = "<<a<<endl;
    }
    void operator=(sample s){
        a=77;
    }
};
int main()
{
   sample s1(11),s2(55);
   s1.show();
   s2.show();
   s1=s2;
   s1.show();
   
 return 0;
}