#include <iostream>
using namespace std;
class base
{
protected:
    int real, img;

public:
    void getinput()
    {
        cout << "Enter the real part " << endl;
        cin >> real;
        cout << "Enter the img part " << endl;
        cin >> img;
    }
};
class derived : public base
{
public:
    derived addcomplex(derived d1, derived d2)
    {
        derived temp;
        temp.real = d1.real + d2.real;
        temp.img = d1.img + d2.img;
        return temp;
    }
    void show()
    {
        cout << "The sum is" << endl;
        cout << real << "+i" << img << endl;
    }
};
int main()
{
    derived d1, d2, d3;
    d1.getinput();
    d3 = d3.addcomplex(d1, d2);
    d3.show();
    return 0;
}