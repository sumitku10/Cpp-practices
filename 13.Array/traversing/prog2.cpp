#include <iostream>
using namespace std;
#include <string>
int main()
{
    int mark[100], i, a;
    cout << "Enter the size of array : ";
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        cin >> mark[i];
    }
    cout << endl;
    cout << "Number are : ";
    for (int i = 0; i < a; i++)
    {
        cout << mark[i] << endl;
    }
    return 0;
}