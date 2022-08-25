#include<iostream>
#include<math.h>
using namespace std;
#include<string>
class sample{
    int a,t;
    float r,f;
    public:
        sample(int x,int y,float z){
             a=x;
             t=y;
             r=z;
        }
        void intrest(){
            f=a*t*r/100;
            cout<<f;
        }
    
};
int main()
{
    // int x1,y1,z1;
    // cout<<"Enter the ammount & time & intrest : "<<endl;
    // cin>>x1>>y1>>z1;
    sample a1(200,3,4.5);
    a1.intrest();
   
   
 return 0;
}