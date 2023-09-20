#include <iostream>
using namespace std;
class distance1
{
private:
    int km, m, cm;

public:
    void getdata()
    {
        cout << "Enter the value of the km m and cm" << endl;
        cin >> km >> m >> cm;
    }
    void showdata()
    {
        cout << "km=" << km << "m=" << m << "cm=" << cm << endl;
    }
    distance1 add(distance1 d1, distance1 d2)
    {
        cm = d1.cm + d2.cm;
        m = d1.m + d2.m + cm / 100;
        cm = cm % 100;
        km = d1.km + d2.km + m / 1000;
        m = m % 1000;
        return *this;
    }
    // distance1 add(distance1 d1, distance1 d2)
    // {
    //     distance1 temp;
    //     temp.cm = d1.cm + d2.cm;
    //     temp.m = d1.m + d2.m + temp.cm / 100;
    //     temp.cm = temp.cm % 100;
    //     temp.km = d1.km + d2.km + temp.m / 1000;
    //     temp.m = temp.m % 1000;
    //     return temp;
    // }
};
int main()
{
    distance1 d1, d2, d3;
    d1.getdata();
    d2.getdata();
    d1.showdata();
    d2.showdata();
    cout << "The sum of distances is" << endl;
    d3 = d3.add(d1, d2);
    d3.showdata();
    return 0;
}