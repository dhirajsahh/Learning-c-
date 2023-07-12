// wap to convert feet to meter where feet and meter are two different classes:[hints:1ft=0.3048m]
#include <iostream>
#include <conio.h>
using namespace std;
class source;
class destination
{
private:
    float meter;

public:
    destination()
    {
        meter = 0.0;
    }
    destination(float m)
    {
        meter = m;
    }
    void display()
    {
        cout << "The value of meter is " << meter << endl;
    }
};
class source
{
private:
    float feet;

public:
    void input()
    {
        cout << "Enter the value of feet " << endl;
        cin >> feet;
    }
    operator destination()
    {
        float meter = feet * 0.3048;
        return (destination(meter));
    }
};
int main()
{
    source s1;
    destination d1;
    s1.input();
    d1 = s1;
    d1.display();
    return 0;
}