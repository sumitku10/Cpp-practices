#include<iostream>
using namespace std;
#include<string>
int main()
{
  unsigned int res;
  res=(64>>(2+1-2))&(~(1<<2));
  //   res=(64>>(2+1-2))&(1<<2);
  cout<<res;
  
 return 0;
}