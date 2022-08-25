
//wap to overload the binary + operator for two operand using constructor member function

#include <iostream>
using namespace std;
#include <string>
class sample
{
    int x, y;

public:
    sample() {}
    sample(int i, int j)
    {
        x = i;
        y = j;
    }
    sample operator+(sample s)
    {
        sample temp;
        temp.x = x + s.x;
        temp.y = y + s.y;
        return temp;
    }
    void output()
    {
        cout << x << endl << y;
    }
};

int main()
{
    sample s1(10, 60), s2(40, 20), s3;
    s3 = s1 + s2;
    s3.output();
    return 0;
}