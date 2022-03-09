//parameterized constructor
#include <iostream>
#include <string>
using namespace std;
class Employee
{
public:
    int id;
    string name;
    float salary;
    Employee(int i, string n, float s)
    {
        id = i;
        name = n;
        salary = s;
    }
    void display()
    {
        cout << id << " " << name << " " << salary << endl;
    }
};
int main()
{
    Employee e1 = Employee(100, "shubham", 123.45);
    Employee e2 = Employee(101, "sachin", 500.10);
    e1.display();
    e2.display();
    return 0;
}