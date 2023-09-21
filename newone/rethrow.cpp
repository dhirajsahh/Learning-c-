#include <iostream>
#include <math.h>
using namespace std;
void root(int a)
{
    try
    {
        if (a >= 0)
        {
            cout << "square root of a number is" << endl;
            cout << sqrt(a) << endl;
        }
        else
        {
            throw a;
        }
    }
    catch (int a)
    {
        cout << "The number is" << endl;
        cout << a << endl;
        cout << "The number is negative so cannot be found square root" << endl;
        throw;
    }
}
int main()
{
    root(9);
    root(3);
    root(-2);
    return 0;
}
