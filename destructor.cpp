//destructor
#include <iostream>
#include <string>
using namespace std;
class Employee
{
public:
    int id;
    string name;
    Employee(int i, string n)
    {
        id = i;
        name = n;
    }
    void display()
    {
        cout << id << " " << name << endl;
    }
    ~Employee()
    {
        cout<<"destructor is called"<<endl;
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