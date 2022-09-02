#include<iostream>
using namespace std;
#include<string>
int main(){
   for(int i=1;i<=5;i++){
       if(i==3){
         // where three is not printing
           continue;
       }
       cout<<i<<endl;
   }
 return 0;
}