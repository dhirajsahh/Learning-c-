// Write a program designing a class called midpoint to finc the midpoint beetweeh points by returning object from  member function using this pointer.
#include <iostream>
using namespace std;
class midpoint
{
private:
    int x, y;

public:
    void getinput()
    {
        cout << "Enter the value of x and y coordinates" << endl;
        cin >> x >> y;
    }
    void display()
    {
        cout << "The cordinate of midpoint is" << endl;
        cout << " x :" << x << "y :" << y;
    }
    midpoint calculate(midpoint m1, midpoint m2)
    {
        midpoint temp;
        x = (m1.x + m2.x) / 2;
        y = (m1.y + m2.y) / 2;
        return *this;
    }
};
int main()
{
    midpoint m1, m2, m3;
    m1.getinput();
    m2.getinput();
    m3 = m3.calculate(m1, m2);
    m3.display();
    return 0;
}