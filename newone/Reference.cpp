#include <iostream>
using namespace std;
int &average(int &x1, int &y1)
{
    int average = (x1 + y1) / 2;
    if (x1 > y1)
    {
        x1 = average;
        return x1;
    }
    else
    {
        y1 = average;
        return y1;
    }
}
int main()
{
    int x = 6, y = 4;
    average(x, y) = -1;
    cout << "x is " << x << endl;
    cout << "y is" << y << endl;
    return 0;
}