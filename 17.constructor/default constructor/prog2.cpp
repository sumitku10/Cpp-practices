#include<iostream>
using namespace std;
#include<string>
class sample{
    int a;
    float c,b;

    public:
    sample(){
        b=3.1417;
        cout<<"Enter the radius of circle : ";
        cin>>a;
        c=a*a*b;
        cout<<"area of circle is "<<c;
    }
    
};
int main()
{
    sample s1;
 return 0;
}