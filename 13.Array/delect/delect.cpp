#include <iostream>
using namespace std;
#include <string>
int main()
{

    int a[100], i, loc, size;
    cout << "Enter the size of array : ";
    cin >> size;
    cout << "Enter the " << size <<   " elements : "<< endl;

    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }

   // Enter position number where we want to delect //

    cout << "Enter position number where we want to delect : ";
    cin >> loc;
    if (loc > size + 1)
    {
        cout << "invalid position";
    }
    else
    {
        for (i = loc - 1; i < size; i++)
        {
            a[i] = a[i + 1];
        }
    }

    cout << " After delete a Array is : " << endl;

    for (int i = 0; i < size; i++)
    {
        cout << a[i] << endl;
    }

    return 0;
}