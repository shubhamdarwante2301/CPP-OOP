//use of static in c++
#include <iostream>
#include <string>
using namespace std;
class Employee
{
    static int count;

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
        cout << id << " " << name << " ";
    }
    static void print()
    { //static function has only access of another static function or static variable
        cout << count++ << endl;
    }
};
int Employee::count = 1; //default value is 0
int main()
{
    Employee e1 = Employee(100, "shubham");
    Employee e2 = Employee(101, "sachin");
    Employee e3 = Employee(102, "amol");
    e1.display();
    Employee::print();
    e2.display();
    Employee::print();
    e3.display();
    Employee::print();
    return 0;
}