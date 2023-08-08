// Explain different types of consructor with suitaible examples.
#include <iostream>
#include <conio.h>
using namespace std;
class rectangle
{
    int l, b;

public:
    rectangle()
    {
        l = 2;
        b = 3;
    }
    rectangle(int len, int br)
    {
        l = len;
        b = br;
    }
    rectangle(rectangle &l2)
    {
        l = l2.l;
        b = l2.b;
    }
    void display()
    {
        cout << "The area is " << l * b << endl;
    }
};
int main()
{
    rectangle l1;
    rectangle l2(5, 6);
    rectangle l3(l2);
    cout << "using default constructor" << endl;
    l1.display();
    cout << "using parameterized constructor" << endl;
    l2.display();
    cout << "using copy constructor" << endl;
    l3.display();
    return 0;
}