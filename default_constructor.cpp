//default constructor
#include <iostream>
using namespace std;
class Employee
{
public:
    Employee()
    {
        cout << "Default Constructor Invoked" << endl;
    }
};

int main()
{
    Employee e1; //creating an object of employee;
    Employee e2;
    return 0;
}