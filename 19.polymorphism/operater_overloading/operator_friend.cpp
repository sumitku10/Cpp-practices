// 5.

#include <iostream>
using namespace std;
class complex{
    int num1, num2;

public:
    void accept(){
        cout << "enter value = " << endl;
        cin >> num1 >> num2;
    }
    friend complex operator+(complex c1, complex c2);
    void display(){
        cout << num1 <<"i" <<"+" << num2 << "j" << endl;
    }
};
complex operator+(complex c1, complex c2){
    complex c;
    c.num1 = c1.num1 + c2.num1;
    c.num2 = c1.num2 + c2.num2;
    return c;
}
int main()
{
    complex c1, c2, c3;
    c1.accept();
    c2.accept();
    c3=c1+c2;
    cout << "Enter value are =  ";
    c1.display();
    c2.display();
    c3.display();
    return 0;
}