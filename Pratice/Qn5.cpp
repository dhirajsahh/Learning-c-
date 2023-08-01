// Write a program that converts object of Celsius type to object of Fahrentreit type.
// destination=fahrenheit  source celsius type
#include <iostream>
using namespace std;
class destination
{
    float ftemp;

public:
    destination()
    {
        ftemp = 0;
    }
    destination(float temp)
    {
        ftemp = temp;
    }
    void display()
    {
        cout << "the temperature is farenheit is" << ftemp << endl;
    }
};
class source
{
private:
    float ctemp;

public:
    void getdata()
    {
        cout << "Enter the centigrade temperture" << endl;
        cin >> ctemp;
    }
    operator destination()
    {
        float ftemp = 1.8 * ctemp + 32;
        return (destination(ftemp));
    }
};
int main()
{
    source s1;
    s1.getdata();
    destination d1;
    d1 = s1;
    d1.display();
    return 0;
}
