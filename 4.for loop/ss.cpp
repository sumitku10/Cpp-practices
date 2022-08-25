


#include <iostream>
using namespace std;
class a
{
public:
    int g;
    a()
    {
        g = 10;
    }
};
class b : public a
{};
class c : public virtual a
{};
class d : public b, public c
{};

int main()
{
    d obj;
  //  cout << "a" << obj;

    return 0;
}