//store and display student info
#include <iostream>
#include <string>
using namespace std;
class Student
{
public:
    int roll;
    string name;
    void insert(int r, string n)
    {
        roll = r;
        name = n;
    }
    void print()
    {
        cout << roll << " " << name << endl;
    }
};
int main()
{
    Student s1, s2;
    s1.insert(62, "shubham");
    s2.insert(63, "amol");
    s1.print();
    s2.print();

    return 0;
}