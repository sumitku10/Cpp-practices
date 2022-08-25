#include <iostream>
using namespace std;
#include <string>
int main()
{
    int array[100], size, pos, i;
    cout << "Enter the size of array : ";
    cin >> size;
    for (i = 0; i < size; i++)
    {
        cin >> array[i];
    }
    cout << "Enter the position which we delect : ";
    cin >> pos;
    for (i = pos-1; i < size; i++)
    {
        array[i] = array[i + 1];
    }
    cout << "final array are : " << endl;
    for (i = 0; i < size; i++)
    {
        cout << array[i] << endl;
    }

    return 0;
}