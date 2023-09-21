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
    catch (char a)
    {
        cout << "char type error occured" << endl;
    }
    catch (int a)
    {
        cout << "int type error occured" << endl;
    }
    catch (double a)
    {
        cout << "double type error occured" << endl;
    }
}
int main()
{
    test(1);
    test(2);
    test(3);
    return 0;
}