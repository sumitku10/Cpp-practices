#include<iostream>
using namespace std;
#include<string>
class parent
{
    public:
    int id_p=77;
    
};
class child : public parent{
    public:
    int id_c=3;

};

int main(){
   child obj1;
   obj1.id_c;
   obj1.id_p;
   
    cout <<"child id is "<<obj1.id_c<<endl;
    cout <<"child id is "<<obj1.id_p<<endl;
   
 return 0;
}