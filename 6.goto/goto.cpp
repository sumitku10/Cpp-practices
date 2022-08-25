#include <iostream>
using namespace std;
#include <string>
int main()
{
ineligible:
{
    cout << "you are not eligible for vote " << endl;
}
    cout << "Enter your age : ";
    int age;
    cin >> age;
    if (age <= 18)
    {
        goto ineligible;
    }
    else
    {
        cout << "you are eligible for vote";
    }

    
    return 0;
}