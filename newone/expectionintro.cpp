#include <iostream>
using namespace std;
void test(int x, int y, int z)
{
    int a = x - y;
    try
    {
        if (a == 0)
        {
            throw a;
        }
        else
        {
            cout << "Dividing by difference" << endl;
            cout << (z / a) << endl;
        }
    }
    catch (int a)
    {
        cout << "Dividing by zero occurs" << endl;
    }
}
int main()
{
    test(3, 2, 1);
    test(3, 3, 6);
    test(4, 2, 6);
}