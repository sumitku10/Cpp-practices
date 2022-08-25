#include <iostream>
using namespace std;

void ram (int [2] [3], int, int);

int main()
{
    int x;
    int array1[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int array2[2][3] = {1, 2, 3, 4};
    ram(array1, 2, 3);
    ram(array2, 2, 3);
    cin >> x;
    return 0;
}
void ram(int a[2][3], int first, int second)
{
    for (int i = 0; i < first; i++)
    {
        for (int j = 0; j < second; j++)
            cout << a[i][j];
        cout << endl;
    }
    return ;
}
