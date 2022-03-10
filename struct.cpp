//structure in C++
#include <iostream>
using namespace std;
struct temp
{
    int a = 0;
    int b = 1;
    void print(int m, int n)
    {
        a = m;
        b = n;
        cout << a << " " << b << endl;
    }
};
int main()
{
    temp t1, t2;
    t1.print(10, 20);
    t2.print(30, 40);
    return 0;
}