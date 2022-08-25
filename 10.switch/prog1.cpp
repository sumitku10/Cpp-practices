/*  if more then iff condition are uses in program then we prefer to use in swith case

*/
#include <iostream>
using namespace std;
#include <string>
int main()
{
    int num;
    cout << "Enter the number 1 to 3 :";
    cin >> num;
    switch (num)
    {
    case 1:
        cout << "it is 1";
        break;
    case 2:
        cout << "it is 2";
        break;
    case 3:
        cout << "it is 3";
        break;

    default:
        cout << "number not found";
    }
    return 0;
}