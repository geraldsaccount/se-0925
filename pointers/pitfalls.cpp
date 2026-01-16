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
}

void error3()
{
    int *p = nullptr;
    cout << *p << endl;
}

int main()
{

    return 0;
}