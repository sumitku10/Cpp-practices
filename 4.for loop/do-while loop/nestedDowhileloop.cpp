#include<iostream>
using namespace std;
#include<string>
int main()
{
   int i =1;
   do{
       int j=1;
       do{
           cout<<i<<endl;
           j++;
       }
       while(j<=3);
       i++;
   }
   while(i<=3);
 return 0;
}