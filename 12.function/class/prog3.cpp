#include <iostream>
using namespace std;
#include <string>

class Base
{
public:
    Base();
    Base(const int i);
    const Base &operator=(const Base &b1);

private:
    int member;
};
Base::Base()
{
    cout << "Base's default constructor!" << endl;
}
Base::Base(const int i) : member(i)
{
    cout << "Base's constructor!" << endl;
}
const Base &Base::operator=(const Base &b1)
{
    cout << "Base's assignment operator!" << endl;
    member = b1.member;
    return *this;
}
class User
{
public:
    User(const Base &b1);

private:
    Base member;
};
User::User(const Base &b1)
{
    cout << "User's constructor!" << endl;
    member = b1;
}
int main(int argc, char *argv[])
{
    Base b1(1234);
    User u1(b1);
    return 0;
}