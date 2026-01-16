#include <iostream>
using namespace std;

int *error1()
{
    int local = 100;
    return &local;
}

void error2()
{
    int *p = new int(5);
    delete p;
}

void error3()
{
    int *p = nullptr;
    cout << *p << endl;
}

int main()
{
    cout << *error1() << endl;
    return 0;
}