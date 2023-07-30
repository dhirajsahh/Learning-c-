#include <iostream>
using namespace std;
class base
{
public:
    virtual void show()
    {
        cout << "I am from base class" << endl;
    }
};
class child1 : public base
{
public:
    void show()
    {
        cout << "I am from child1 class" << endl;
    }
};
class child2 : public base
{
public:
    void show()
    {
        cout << "I am from child2 class" << endl;
    }
};
int main()
{
    base *b1;
    child1 c1;
    child2 c2;
    b1 = &c1;
    b1->show();
    b1 = &c2;
    b1->show();
    return 0;
}