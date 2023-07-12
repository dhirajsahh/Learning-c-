#include <iostream>
using namespace std;
class Distance
{
    int feet;
    float inch;

public:
    Distance()
    {
        feet = 0;
        inch = 0.0;
    }
    Distance(float meter)
    {
        float totalfeet = meter * 3.280833;
        feet = int(totalfeet);
        inch = (totalfeet - feet) * 12.0;
    }
    void display()
    {
        cout << "The value of feet is " << feet << endl;
        cout << "the value of inch is" << inch << endl;
    }
};
int main()
{
    Distance D1;
    float meter;
    cout << "Enter the value of meter" << endl;
    cin >> meter;
    D1 = meter;
    D1.display();
    return (0);
}