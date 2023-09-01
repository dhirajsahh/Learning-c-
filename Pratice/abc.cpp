#include <iostream>
using namespace std;
class data
{
private:
    int a, b;

public:
    void getinput()
    {
        cout << "Enter the value of a and b" << endl;
        cin >> a >> b;
    }
    void display()
    {
        cout << "The value of a and b is " << a << " " << b << endl;
    }
    data operator+(data c1)
    {
        data c3;
        c3.a = a * c1.a;
        c3.b = b * c1.b;
        return c3;
    }
};

int main()
{
    data d1, d2, d3;
    d1.getinput();
    d2.getinput();
    d3 = d1 + d2;
    d3.display();
    return 0;
}