//this keyword in cpp
#include <iostream>
#include <string>
using namespace std;
class Employee
{
public:
    int id;
    string name;
    Employee(int id, string name)
    {
        this->id = id;
        this->name = name;
    }
    void display()
    {
        cout << id << " " << name << endl;
    }
};
int main()
{
    Employee e1 = Employee(100, "shubham");
    Employee e2 = Employee(101, "sachin");
    e1.display();
    e2.display();
    return 0;
}