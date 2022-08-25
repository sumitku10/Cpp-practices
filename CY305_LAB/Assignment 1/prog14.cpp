#include<iostream>
using namespace std;
#include<string>
class classname2;
class classname1{
  private :
  int x;
  friend int add (classname1 ob1, classname2 ob2);
  public:
  classname1(){
    x=10;
  }
};
class classname2{
  private:
  int y;
  friend int add(classname1 ob1 , classname2 ob2);
  public :
  classname2(){
    y=20;
  }
};
int add(classname1 ob1, classname2 ob2){
  return(ob1.x+ob2.y);
}
int main()
{
   classname1 ob1;
   classname2 ob2;
   cout<<add(ob1,ob2);
}