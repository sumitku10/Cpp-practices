#include <iostream>
using namespace std;
#include <string>

int main()
{
  int a[13][13], i, j, b;
  for (i = 0; i < 13; i++)
  {
    for (j = 0; j < 13; j++)
    {
      if (i == 2 & j == 2)
      {
        break;
      }
      cout << i<< " " <<j<<endl;
    } 
     return 0;
  }
 
}