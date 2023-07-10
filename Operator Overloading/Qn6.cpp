#include <iostream>
using namespace std;
class test
{
    int a;
    int sum;

public:
    void input()
    {
        cout << "Enter the value of a";
        cin >> a;
    }
    friend test operator+(test, test);

    void display()
    {
        cout << "the vlaue of sum is" << sum;
    }
};
test operator+(test t1, test t2)
{
    test t3;
    t3.sum = t1.a + t2.a;
    return t3;
}
int main()
{
    test t1, t2, t3;
    t1.input();
    t2.input();
    t3 = t1 + t2;
    t3.display();
}