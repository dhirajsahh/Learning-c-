#include <iostream>
using namespace std;
class celsius;
class farenheit
{
private:
    float f;

public:
    farenheit()
    {
        f = 0.0;
    }
    farenheit(float fh)
    {
        f = fh;
    }
    void display()
    {
        cout << "the value of the farenheit is" << endl;
        cout << f;
    }
};
class celsius
{
private:
    int c;

public:
    void getinput()
    {
        cout << "Enter the value in centigrade" << endl;
        cin >> c;
    }
    operator farenheit()
    {
        float fh = (1.8 * c + 32);
        return (farenheit(fh));
    }
};
int main()
{
    farenheit f1;
    celsius c1;
    c1.getinput();
    f1 = c1;
    f1.display();
    return 0;
}