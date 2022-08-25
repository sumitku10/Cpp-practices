#include <iostream>
using namespace std;
#include <string>
class complex
{
private:
    float real, imag;

public:
    complex()
    {
        real = 0.0;
        imag = 0.0;
    }
    void input()
    {
        cin >> real;
        cin >> imag;
    }
    complex operator+(const complex &obj)
    {
        complex temp;
        temp.real = real + obj.real;
        temp.imag = imag + obj.imag;
        return temp;
    }
    void output()
    {
        if (imag < 0)
            cout << real << imag << endl;
        else
            cout << real << imag << endl;
    }
};

int main(){
    complex c1, c2, c3;
    c1.input();
    c2.input();
    c3 = c1 + c2;
    c3.output();
    return 0;
}