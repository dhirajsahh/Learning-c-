#include <iostream>
using namespace std;
class test
{
private:
    int x, y;

public:
    test()
    {
        x = 0;
        y = 0;
        cout << "I am from default constructor" << endl;
    }
    test(int a, int b)
    {
        x = a;
        y = b;
        cout << "I am from parameterized constructor" << endl;
    }
    test(test &t2)
    {
        x = t2.x;
        y = t2.y;
        cout << "I am from copy constructor" << endl;
    }
    ~test()
    {
        cout << "The value of consturctor is destroyed" << endl;
    }
    void display()
    {
        cout << "The value of x and y is" << endl;
        cout << x << y << endl;
    }
};
int main()
{
    test t1;
    test t2(5, 6);
    test t3(t2);
    t1.display();
    t2.display();
    t3.display();
    return 0;
}