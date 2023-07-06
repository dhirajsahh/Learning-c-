// binary overloading
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
    test(int b)
    {
        a = b;
    }
    test operator+(test t1)
    {
        test temp;
        temp.a = a + t1.a;
        return temp;
    }
    void display()
    {
        cout << "the sum is " << a;
    }
};
int main()
{
    test t1, t2(5), t3(9);
    t1 = t2 + t3;
    t1.display();
    return (0);
}