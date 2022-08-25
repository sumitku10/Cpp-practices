#include<iostream>
using namespace std;
#include<string>


void prsc(){
    cout<<"hello everyone"<<endl;
}
int main(){
    int a;
    prsc();
    cout<<"enter the number :"<<endl;
    cin>>a;
    if (a>=5)
    {
        /* code */cout<<"hii"<<endl;
    }
    switch (a)
    {
    case /* constant-expression */ 1:
        /* code */cout<<"hello"<<endl;
        break;
    
    default:
    cout<<"thank you"<<endl;
        break;
    }
    

 return 0;
}