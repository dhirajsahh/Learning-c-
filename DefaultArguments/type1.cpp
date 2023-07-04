#include <iostream>
using namespace std;
int interest(int p = 100, int r = 2, int t = 5);
int main()
{
    cout << "The interest with no argument while calling" << endl;
    cout << interest() << endl;
    cout << "The interest with passing  argument 20 while calling" << endl;
    cout << interest(20) << endl;
    cout << "The interest with passing two argument while calling" << endl;
    cout << interest(30, 20);
}
int interest(int p, int r, int t)
{
    return (p * t * r) / 100;
}