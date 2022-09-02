#include<iostream>
using namespace std;
#include<string>
int main()
{
   for(int i=1;i<=3;i++){
       for(int j=1;j<=3;j++){
           if(i==2&j==2){
             // where  2 2 is not print
               continue;
           }
           cout<<i<<" "<<j<<endl;
       }
   }
 return 0;
}