#include<iostream>
using namespace std;
#include<string>
int main()
{
  int a=10;
  int*ram=&a;
  cout<<*ram<<endl;
  *ram=20;
  cout<<a<<endl;
 return 0;
}