#include <iostream>
using namespace std;
#include <string>
    class Employee
    {
    public:
        void ChangeAge();
        void DisplayAge();
        void Delete();
        void DisplayName();
        Employee();
        virtual ~Employee();

    protected:
        int m_nAge;
        char *m_strName;
    };
    Employee::Employee() : m_nAge(34)
    {
        m_strName = new char[30];
        strcpy (m_strName, "Frank Liu");
    }
    Employee::~Employee()
    {
        delete m_strName;
    }
    void Employee::DisplayName()
    {
        cout << m_strName << endl;
    }
    void Employee::DisplayAge()
    {
        cout << m_nAge << endl;
    }
    void Employee::ChangeAge()
    {
        m_nAge = 35;
    }
    void Employee::Delete()
    {
        delete this;
    }
    Employee *e2 = new Employee;
int main(){


    return 0;
}