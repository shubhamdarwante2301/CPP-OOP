//union in c++
#include<iostream>
using namespace std;
union money
{
    int rupee; //4
    float doller; //4   total 4 bytes memory is occupied only
    float pounds;  //4
};
int main()
{
    union money m1, m2;
    m1.rupee = 100;  //one object can use only one data member 
    cout<<m1.rupee<<endl;
    m2.doller = 12.5;
    cout<<m2.doller<<endl;
    return 0;
}