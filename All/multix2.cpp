#include<iostream>
using namespace std;
#include<string>
int main()
{
    int a ,i,b;
   cout<<"Enter the number for table :";
   cin>>a;
   cout<<"Enter the which number till the calculate : ";
   cin>>b;
   for(int i=1;i<=b;i++){
       cout<<a<<"*"<<i<<" = "<<a*i<<endl;
   }
   
 return 0;
}