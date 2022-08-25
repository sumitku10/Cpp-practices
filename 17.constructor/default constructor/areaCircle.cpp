#include<iostream>
using namespace std;

class area{
    int a;
    float b,c=3.14;
    public:
    area(){
    cout<<"Enter the radius of circle : ";
    cin>>a;
    b=a*a*c;
    cout<<"area of circle of is " <<b<<endl;
    }
   void Circumfrence(){
      float k=2*c*a;
      cout<<"circumfreance of circle is "<<k;
   }
};

int main()
{
    area a1;
    a1.Circumfrence();
   
 return 0;
}
