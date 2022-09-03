#include<iostream>
using namespace std;
#include<string>

class university{
    char name[100];
    char loc[100];

    public:
    void get(){
        cout<<"Enter the university name :";
        cin>>name;
        cout<<" Enter location : ";
        cin>>loc;
    }
    void show(){
        cout<<name;
        cout<<loc;
    }
};
class college : public university{



    
};
class branch:public college{
    
};

class academic:public university,public college ,public branch{
    private:
    int
};


int main()
{
   
   
 return 0;
}