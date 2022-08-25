#include <iostream>
using namespace std;
#include <string>
int main()
{
    int a;

ineligible:
{
    cout << "are you pass" << endl;
}

    cout << "enter the your marks" << endl;
    cin >> a;
    if (a > 60)
    {
        goto ineligible;
    }
    else
    {
        cout << " are you not pass" << endl;
    }

    return 0;
}