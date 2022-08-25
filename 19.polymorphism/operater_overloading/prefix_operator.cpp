#include<iostream>
using namespace std;
#include<string>

class sample{
    int a ,b;
    public:
    sample(){
        a=13;
        b=24;
    }
    void operator++(int){
        a++;
    }
    void operator++(){
        ++b;
    }
    void show(){
        cout<<a;
    }
    void show1(){
        cout<<b;
    }
};
int main()

{
    sample s;
    s++;
    s.show();
    cout<<endl;
    ++s;
    s.show1();
    cout<<endl;
    s.operator++(0);
    s.show();

   
 return 0;
}