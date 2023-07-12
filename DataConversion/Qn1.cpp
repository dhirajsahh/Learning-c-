// wap to convert a basic data meter to a class type of data centimeter;
#include <iostream>
#include <conio.h>
using namespace std;
class Distance
{
    float cm;

public:
    Distance()
    {
        cm = 0;
    }
    Distance(float meter)
    {
        cm = meter * 100.0;
    }
    void display()
    {
        cout << "The value of meter in cm is " << cm;
    }
};
int main()
{
    Distance d1;
    float m;
    cout << "Enter the value of meter " << endl;
    cin >> m;
    d1 = m;
    d1.display();
    getch();
    return (0);
}
