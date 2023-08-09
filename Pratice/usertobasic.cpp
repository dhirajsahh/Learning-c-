#include <iostream>
using namespace std;
class Distance
{
private:
    int ft, inch;

public:
    void getinput()
    {
        cout << "Enter the value of ft and inch" << endl;
        cin >> ft >> inch;
    }
    operator int()
    {
    }
};