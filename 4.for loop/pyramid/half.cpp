#include <iostream>
using namespace std;
#include <string>
int main()
{
     //Half pyramid
    int i, j, rows;
    cout << "Enter the number of rows:";
    cin >> rows;
    for (i = 1; i <= rows; i++)
    {
        for (j = 0; j < i; j++)
        {
            cout << "* ";
        }
        cout << " \n";
    }
    return 0;
}