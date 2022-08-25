#include<iostream>
#include<string>
using namespace std;

int main()
{
    int a,b[100];
    cout<<"enter the size of array : ";
    cin>>a;
    cout<<"enter array "<< a << "  element "<<endl;
    for(int i=0;i<a;i++){
        cin>>b[i];
    }
    cout<< "number are"<<endl;
    for(int i=0;i<a;i++){
    cout<<b[i]<<endl;
}
   
 return 0;
}