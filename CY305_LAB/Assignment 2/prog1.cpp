/*   1.  Write an Object Oriented program to add the elements of one dimension array.
     complete  */

     
#include <iostream>
using namespace std;
#include <string>
int main()
{
  int a, i, marks[a];
  int sum = 0;
  cout << "Enter how many numbers are added : ";
  cin >> a;

  cout << "Enter the numbers : " << endl;
  for (i = 0; i < marks[i]; i++)
    cin >> marks[i];
  for (i = 0; i < a; i++)
    sum = sum + marks[i];

  cout << "Total sum = " << sum;

  return 0;
}