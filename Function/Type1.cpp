// with differnet number of arguments
#include <iostream>
int add(int, int);
using namespace std;
int add(int, int, int);
int main()
{
    int r1, r2;
    r1 = add(5, 9);
    r2 = add(5, 8, 6);
    cout << "r1=" << r1 << endl;
    cout << "r2=" << r2;
}
int add(int p, int q)
{
    return (p + q);
}
int add(int p, int q, int r)
{
    return (p + q + r);
}