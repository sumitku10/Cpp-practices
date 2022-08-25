#include <iostream>
using namespace std;
#include <string>
class animal
{
public:
    void eat()
    {
        cout << "dog is Eating.." << endl;
    }
};
class dog : public animal
{
public:
    void bark()
    {
        cout << "dog is barking.." << endl;
    }
};

class babydog : public dog
{
public:
    void weep()
    {
        cout << "dog is weeping.." << endl;
    }
};
int main(void)
{
    babydog d1;
    d1.eat();
    d1.bark();
    d1.weep();
    return 0;
}