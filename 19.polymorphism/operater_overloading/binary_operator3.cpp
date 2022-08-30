
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
    sample operator-(sample s)
    {
        sample temp;
        temp.x = x - s.x;
        temp.y = y - s.y;
        return temp;
    }
    void output()
    {
        cout << x << endl << y << endl;
    }
};

int main()
{
    sample s1(10, 60), s2(40, 20), s3,s4;
    s3 = s1 + s2;
    s4 = s1- s2;
    s3.output();
    s4.output();
    return 0;
}