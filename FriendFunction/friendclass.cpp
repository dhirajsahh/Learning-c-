#include <iostream>
using namespace std;
class one;
class two
{
    int a;

public:
    void input()
    {
        cout << "enter the value of a";
        cin >> a;
    }
    friend class one;
};
class one
{
    int b;

public:
    void sum(two b)
    {
        int sum = 5 + b.a;
        cout << "The sum is " << sum;
    }
};
int main()
{
    two t1;
    one a;
    t1.input();
    a.sum(t1);
    return 0;
}
