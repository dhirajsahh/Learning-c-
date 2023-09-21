#include <iostream>
using namespace std;
class base1
{
public:
    base1()
    {
        cout << "I am from base1 construcor" << endl;
    }
    ~base1()
    {
        cout << "I am from base1 destructor " << endl;
    }
};
class base2
{
public:
    base2()
    {
        cout << "I am from base2 constructor" << endl;
    }
    ~base2()
    {
        cout << "I am from base2 destuctor" << endl;
    }
};
class child : public base1, public base2
{
public:
    child()
    {
        cout << "I am from child constructor" << endl;
    }
    ~child()
    {
        cout << "I am from child destructor" << endl;
    }
};
int main()
{
    child c1;
    return 0;
}