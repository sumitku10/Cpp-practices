#include<iostream>
using namespace std;
#include<string>
int main()
{
    int x=10;
    int y=(x++,x++,x++);
    cout<<x;
    cout<<y;
   
   
 return 0;
}
