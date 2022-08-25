/*    5. Write an object oriented program to read the element of given two matrix and find
         out sum of all element of the given array  */

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int a[50][50], b[50][50], c[50][50], i, j, r1, r2, c1, c2, k;

    cout << "Enter dimension of first matrix:\nNumber of rows:";
cin>>r1;
cout << "\nNumber of columns:";
cin >> c1;
cout << "\nEnter dimension of second matrix:\nNumber of rows:";
cin >> r2;
cout << "\nNumber of columns:";
cin >> c2;
if (r1 != c2)
{
    cout << "Multiplication is not possible!!!";
}
else
{
    cout << "Enter Elements of first matrix:";
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            cin >> a[i][j];
        }
    }
    cout << "Enter Elements of second matrix:";
    for (i = 0; i < r2; i++)
    {
        for (j = 0; j < c2; j++)
        {
            cin >> b[i][j];
        }
    }
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            c[i][j] = 0;
        }
    }
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            for (k = 0; k < c1; k++)
            {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    cout << "\nFirst Matrix:\n";
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            cout << " " << a[i][j];
        }
        cout << "\n";
    }
    cout << "\nSecond Matrix:\n";
    for (i = 0; i < r2; i++)
    {
        for (j = 0; j < c2; j++)
        {
            cout << " " << b[i][j];
        }
        cout << "\n";
    }
    cout << "\nMultiplication of Matrices:\n";
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            cout << " " << c[i][j];
        }
        cout << "\n";
    }
}
return 0;
}