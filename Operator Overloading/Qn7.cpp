#include <iostream>
using namespace std;
class Distance
{
    int feet;
    int inch;

public:
    Distance()
    {
        feet = 0;
        inch = 0;
    }
    Distance(int ft, int in)
    {
        feet = ft;
        inch = in;
    };
    friend Distance operator+(Distance, Distance);
    void display()
    {
        cout << "The feet is " << feet << endl;
        cout << "The inch is " << inch << endl;
    }
};
Distance operator+(Distance d1, Distance d2)
{
    Distance temp;
    temp.inch = d1.inch + d2.inch;
    temp.feet = d1.feet + d2.feet + temp.inch / 12;
    temp.inch = temp.inch % 12;
    return (temp);
}
int main()
{
    Distance d1, d2(4, 11), d3(5, 8);
    d1 = d2 + d3;
    d1.display();
    return (0);
}