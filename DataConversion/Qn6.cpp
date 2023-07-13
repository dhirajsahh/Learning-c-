// class type to class type centigrade to farenheit
#include <iostream>
#include <conio.h>
using namespace std;
class centigrade;
class farenheit
{
    float f;

public:
    farenheit()
    {
        f = 0.0;
    }
    farenheit(float faren)
    {
        f = faren;
    }
    void display()
    {
        cout << "the value of farenheit is " << endl
             << f;
    }
};
class centigrade
{
    float centi;

public:
    void getinput()
    {
        cout << "Enter the value in centigrade" << endl;
        cin >> centi;
    }
    operator farenheit()
    {
        float faren = (1.8 * centi) + 32;
        return (farenheit(faren));
    }
};
int main()
{
    centigrade c;
    farenheit f;
    c.getinput();
    f = c;
    f.display();
    return 0;
}