// Performing multiplication using - operator
#include <iostream>
using namespace std;
class test
{
    int a;

public:
    test()
    {
        a = 0;
    }
    test(int x)
    {
        a = x;
    }
    test operator-(test t)
    {
        test temp;
        temp.a = a * t.a;
        return (temp);
    }
    void display()
    {
        cout << "The value of a multiplication is" << a;
    }
};
int main()
{
    test t1, t2(3), t3(5);
    t1 = t2 - t3;
    t1.display();
    return 0;
}