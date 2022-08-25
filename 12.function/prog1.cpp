#include<iostream>
using namespace std;

int square(int a);
int add(int a,int b)
{
   return (a+b);
}

int square(int a)
{
   int ans = a*a;
   return ans;
}

int main()
{

   int c = add(2,5);
   cout << c << endl;
   cout << square(5);
   return 0;
}