#include<iostream>
using namespace std;
#include<string>
int main()
{
   int i=1;
   while(i<=3){
       int j=1;
       while(j<=3){
           cout<<i<<" "<<j<<endl;
           j++;
       }
       i++;
   }
 return 0;
}