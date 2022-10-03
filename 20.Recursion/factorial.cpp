#include <iostream>
using namespace std;
#include <string>
int main()
{
    int factorial(int);
    int fact, a;
    cout << "Enter number for factorial : ";
    cin >> a;
    fact = factorial(a); // call to factorial funtion
    cout << "factorial of number  " << fact << endl;

    return 0;
}

int factorial(int n)
{
    if (n < 0)
    return (-1);
    if (n == 0)
    return (1);
    else
    {
        return (n * factorial(n - 1));
    }
}
