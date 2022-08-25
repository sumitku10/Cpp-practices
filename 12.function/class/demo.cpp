#include<iostream>
using namespace std;
#include<string>
class democlass{
    public:
    int demofunction(int i){
        return i;
    }
    double demofunction(double d){
        return d;
    }
};

int main(void){
   democlass obj;
   cout<<obj.demofunction(100)<<endl;
   cout<<obj.demofunction(44444.555)<<endl;
 return 0;
}