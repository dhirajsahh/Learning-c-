// introduction to constructor
#include <iostream>
using namespace std;
class test
{
    int x;

public:
    test()
    {
        cout << "The constructor is automatically called when the object of class is created";
    }
};
int main()
{
    test t;
}