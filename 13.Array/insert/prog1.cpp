#include <iostream>
using namespace std;
#include <string>
int main()
{
    int mark[100], size, pos, num;
    cout << "Enter the size of array : ";
    cin >> size;
    cout << "enter Arrays "<< size <<" element :"<<endl;
    for (int i = 0; i < size; i++)
    {
        cin >> mark[i];
    }
    cout << "Enter the position of array where we are insert : ";
    cin >> pos;
    cout << "Enter the number which insert : ";
    cin >> num;
    for (int i = size; i >= pos; i--)
    mark[i]=mark[i - 1];
    mark[pos] = num;
    size++;
    cout << "final Array are : "<<endl;
    for (int i = 0; i < size; i++)
    {
        cout << mark[i] << endl;
    }

    return 0;
}