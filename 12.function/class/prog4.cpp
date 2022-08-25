#include<iostream>
using namespace std;
#include<string>
class account{
    public:
    float salary=8000;
};
class programmer:
public account{
    public:
    float bonus=7000;
};
int main(void)
{
    programmer p1;
    cout<<"salary = "<< p1.salary <<endl;
    cout<<"bonus = "<<p1.bonus   <<endl;
   
 return 0;
}