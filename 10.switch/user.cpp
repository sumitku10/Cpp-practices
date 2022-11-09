/*  if more then iff condition are uses in program then we prefer to use in swith case
*/
#include <iostream>
using namespace std;
#include <string>
int main()
{
    int num; // variable
    cout << "Enter the number 1 to 5 anyone :";
    cin >> num;
    // switch statement 
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
    case 4:
        cout << "it is 4";
        break;    
    case 5:
        cout << "it is 5";
        break;    

    default:
        cout << "number not found";
    }
    return 0;
}
