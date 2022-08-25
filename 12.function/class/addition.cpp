#include<iostream>
using namespace std;
#include<string>
class addition{
    public:
    int sum (int num1,int num2){
        return num1+num2;
    }
   // int sum(int num1,int num2,int num3){
    //return num1+num2+num3;
   // }
};
int main(void)
{
    addition obj;
    cout<<obj.sum(20,15)<<endl;
   // cout<<obj.sum(44,55,66)<<endl;
   
 return 0;
}