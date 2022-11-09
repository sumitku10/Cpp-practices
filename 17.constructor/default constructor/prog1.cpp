#include <iostream>
using namespace std;
#include <string>
class area{
    int a;
    float c;
    float b=3.1417;
    public:
    void show();
   
};

void area :: show(){
    cout << "Enter the radius of circle : ";
    cin >> a;
    c = a * a * b;
    cout << c;
}
int main(){
    area a1;
    a1.show();
    return 0;
}