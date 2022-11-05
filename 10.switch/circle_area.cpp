#include<iostream>
using namespace std;
int main(){
     ///  area ..1 circle..,2 .. area of triangel ,,,3..area of rectngale.
    /// volume  1. volume  2. volume of triangel 3..volume of rectngale.
   
    int choice;
    int a,b,c,d,e,f,g,h,j,k,l,m,n;
    cout<<"Enter for your choice :\n1.area \n2.volume : "<<endl;
    cin>>choice;
    switch(choice)
    {
    case 1:
        cout<<"Enter the your choice:\n1.circle\n2.area of triangle\n3.cirle rectangle : "<<endl;
        cin>>a;
        switch (a)
        {
        case 1:
            cout<<"enter circle of radius";
            cin>>b;
            cout<<"area of circle is "<<b*b*3.14;
            break;
        case 2:
            cout<<"enter base and height\n";   
            cin>>c>>d;
            e=0.5*c*d;
            cout<<"area of triange is "<< e; 
            break;
        case 3:
            cout<<"enter lenght and width\n";   
            cin>>c>>d;
            cout<<"area of reactangle is "<< c*d; 
            break;    
        default:
            cout<<"your choice is not found !";
            break;
        }
        break;
        
    case 2:
       cout<<"\nEnter the your choice:\n1.circle\n2.area triangle\n3.cirle rectangle : "<<endl;
       cin>>j;
       switch (j)
        {
        case 1:
             
            break;
        case 2:
              
            break;
        case 3:
            cout<<"enter lenght and width\n";   
           

            break;    
        default:
            cout<<"your choice is not found !";
            break;
        }
        break;

    default:
        cout<<"choice is not found ! ";
        break;
    }

   
  
 return 0;
} 
