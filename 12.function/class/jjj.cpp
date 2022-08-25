#include<iostream>
using namespace std;
//#include<string>


class school{
    public:
    int id;
    char name[10];
    double pocketmoney;

    void schoolc1(){
      cout<<"Enter the name :";
      cin>>name[10];
      cout<<"Enter the id :";
      cin>>id;
      cout<<"Enter the pocketmoney :";
      cin>> pocketmoney ;
      cout<<endl;
    }
    
  void schoolc2(){
      cout<<"name is "<< name <<endl;
      cout<<"id is "<< id <<endl;
      cout<<"pocketmoney is "<< pocketmoney <<endl;
    }
};

int main(){
  school h;
  h.schoolc1();
  h.schoolc2();
 return 0;
}