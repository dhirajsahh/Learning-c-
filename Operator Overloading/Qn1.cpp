#include <iostream>
using namespace std;
class test
{
    int a;

public:
    test(int x)
    {
        a = x;
    }
    void operator++()
    {
        a = a + 5;
    }
    void display()
    {
        cout << "the value of a is : " << a << endl;
    }
};
int main()
{
    test t(5);
    cout << "Before opertor overloading" << endl;
    t.display();
    ++t;
    cout << "After operator overloading" << endl;
    t.display();
    return 0;
}