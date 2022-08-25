#include <iostream>
using namespace std;
//#include <string>

int main()
{
    // full pyramid
    int i, j, rows, k = 0;
    cout << "Enter the number for rows: ";
    cin >> rows;
    for (i = 1; i <= rows; ++i, k = 0)
    {
        for (j = 1; j <= rows - i; ++j)
        {
            cout << " ";
        }
        while (k != 2 * i - 1)
        {
            cout << "#";
            ++k;
        }
        cout << "\n";
    }
    return 0;
}