// Write a program to show the order of constructor invocation in multiple inheritance
#include <iostream>
using namespace std;
class parent1
{
protected:
    parent1()
    {
        cout << "I am from parent1" << endl;
    }
    ~parent1()
    {
        cout << "I am from parent1 destructor" << endl;
    }
};
class parent2
{
protected:
    parent2()
    {
        cout << "I am from parent2" << endl;
    }
    ~parent2()
    {
        cout << "I am from parent2 destrutctor " << endl;
    }
};
class child : public parent1, public parent2
{
public:
    child()
    {
        cout << "I am from child class" << endl;
    }
    ~child()
    {
        cout << "I am from child class destructor" << endl;
    }
};
int main()
{
    child c1;
    return 0;
}