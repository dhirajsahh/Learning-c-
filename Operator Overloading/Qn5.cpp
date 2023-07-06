#include <iostream>
using namespace std;
class Distance
{
    int cm, m, km;

public:
    Distance()
    {
        cm = 0;
        m = 0;
        km = 0;
    }
    Distance(int c, int me, int k)
    {
        cm = c;
        m = me;
        km = k;
    }
    Distance operator+(Distance d1)
    {
        Distance d;
        d.cm = cm + d1.cm;
        d.m = m + d1.m + d.cm / 100;
        d.cm = d.cm % 100;
        d.km = km + d1.km + d.m / 1000;
        d.m = d.m % 1000;
        return (d);
    }
    void display()
    {
        cout << "the distance is" << endl;
        cout << "cm: " << cm << endl;
        cout << "m: " << m << endl;
        cout << "km: " << km << endl;
    }
};
int main()
{
    Distance d1, d2(30, 1200, 3), d3(40, 100, 5);
    d1 = d2 + d3;
    d1.display();
}