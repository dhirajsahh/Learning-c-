#include <iostream>
using namespace std;
void test(int x)
{
    try
    {
        if (x == 1)
        {
            throw 'a';
        }
        if (x == 2)
        {
            throw 2.3;
        }
        if (x == 3)
        {
            throw x;
        }
    }
    catch (...)
    {
        cout << "All type error are caught" << endl;
    }
}
int main()
{
    test(1);
    test(2);
    test(3);
    return 0;
}