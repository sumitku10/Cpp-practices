#include<iostream>
using namespace std;
#include<string>
int main()
{
   int x=10;
   int y=20;
   x+=y+=10;
   cout<<x<<y;
   
 return 0;
}