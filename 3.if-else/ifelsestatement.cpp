#include <iostream>
using namespace std;
#include <string>
int main()
{
  int num;
  cout<<"Enter the number : ";
  cin>>num;
  if (num % 2 == 0){
    cout << "it is even number";
  }
  else{
    cout << "it is odd number";
  }
  return 0;
}