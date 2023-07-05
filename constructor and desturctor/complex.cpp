#include <iostream>
using namespace std;
class complex
{
private:
    int real, img;

public:
    complex()
    {
        real = 0;
        img = 0;
    }
    complex(int r, int i)
    {
        real = r;
        img = i;
    }
    complex addnum(complex c1, complex c2);
    void display()
    {
        cout << "The number is :" << endl;
        cout << real << "+j" << img;
    }
};
complex complex::addnum(complex c1, complex c2)
{
    complex c3;
    c3.real = c1.real + c2.real;
    c3.img = c1.img + c2.img;
    return c3;
}
int main()
{
    complex c1, c2(5, 6), c3(5, 4);
    c1 = c1.addnum(c2, c3);
    c1.display();
    return 0;
}
