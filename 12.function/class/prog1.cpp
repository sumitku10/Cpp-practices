#include<iostream>
using namespace std;
//#include<string>
class base{
    public:
    virtual void print(){
       cout<<"base function"<<endl;
    }
};
class derived:
public base{
    void print(){
        cout<<"derived function"<<endl;
    }
};
int main(){
 derived d1;
 derived d2;
 base*base1=&d1;
 base1->print();
  return 0;
}