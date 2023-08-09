#include <iostream>
using namespace std;
class source;
class destination
{
    float Nrs;

public:
    destination()
    {
        Nrs = 0.0;
    }
    destination(float m)
    {
        Nrs = m;
    }
    void display()
    {
        cout << "The corresponding nepalese currency is " << Nrs << endl;
    }
};
class source
{
    float Inr;

public:
    void getdata()
    {
        cout << "Enter the value of the indian currency" << endl;
        cin >> Inr;
    }
    operator destination()
    {
        float m = Inr * 1.6;
        return (destination(m));
    }
};
int main()
{
    source s1;
    destination d1;
    s1.getdata();
    d1 = s1;
    d1.display();
    return 0;
}