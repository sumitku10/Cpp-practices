#include <iostream>
using namespace std;
#include <string>
class Base{
   public:
    Base(int a) : member(a)
    {
        cout << "Base constructor called with " << a << endl;
    }

private:
    int member;
};
void test(Base obj1)
{
    cout << "Base object's member = ";
    
}
int main()
{
    test(333);
    obj1.member;
    return 0;
}