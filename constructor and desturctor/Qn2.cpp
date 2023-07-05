// example of default constructor
#include <iostream>
using namespace std;
class test
{
    int x, y;

public:
    test() // default constructor
    {
        x = 5;
        y = 7;
        cout << "the value of x and y is " << endl
             << x << endl
             << y;
    }
};
int main()
{
    test t1;
}