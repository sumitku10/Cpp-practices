#include <iostream>
using namespace std;
#include <string>
int main()
{
    int array[100], i, pos, size, num;
    cout << "Enter size of array : ";
    cin >> size;
    cout << "Enter array"" "<<size<<" "" element : " << endl;
    for (i = 0; i < size; i++){
        cin >> array[i];
    }
    cout << "Enter the position Number if you want insert : ";
    cin >> pos;
    cout << "Enter the Number if you want insert : ";
    cin >> num;
    for (i = size; i >= pos; i--){
        array[i] = array[i - 1];
    }
    array[pos] = num;
    size++;
    //array printing 
    cout << "Finally array element : " << endl;
    for (i = 0; i < size; i++){
        cout << array[i] << endl;
    }
    return 0;
}