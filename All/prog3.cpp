#include<iostream>
using namespace std;
#include<string>
int main()
// array printing
{
    int a[5],i,b;
    cout<<"Enter the number : ";
    cin>>b;
    for(i=0;i<b;i++)
    {
        cin>>a[i];
    }
    cout<<"the value are:";
    for ( i = 0; i < b; i++)
    {
        cout<<a[i]<<endl;
    }
    
   
 return 0;
}