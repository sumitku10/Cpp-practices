#include <iostream>
using namespace std;
#include <string>
int main()
{
    int a, b, c;
    cout << "Enter the number :";
    cin >> a;
    for (b = 1; b <= a; b++)
    {
        for (c = 1; c <= b; c++)
        {
            cout<<c;
        }
        cout << "\n";
    }
    return 0;
}