// Create a class with a constructor and a Destructor and show the operation or working of constructors ancl destructor using appropriate blocks:
#include <iostream>
using namespace std;
class first
{
private:
    int a, b;

public:
    first()
    {
        a = 0;
        b = 0;
        cout << "I am from default constructor" << endl;
    }
    first(int x, int y)
    {
        a = x;
        b = y;
        cout << "I am from parameterized constructor" << endl;
    }
    first(first &c1)
    {
        a = c1.a;
        b = c1.b;
        cout << "I am from copy consturtor" << endl;
    }
    ~first()
    {
        cout << " I am from desturctor";
    }
    void display()
    {
        cout << "The value of a and b is" << a << " " << b << endl;
    }
};
int main()
{
    first f1, f2(3, 4), f3(f2);
    f1.display();
    f2.display();
    f3.display();
    return 0;
}
