#include <iostream>
using namespace std;
class source;
class destination
{
private:
    float gram;

public:
    destination()
    {
        gram = 0.0;
    }
    destination(float gm)
    {
        gram = gm;
    }
    void display()
    {
        cout << "The value of the gold in gm is" << endl;
        cout << gram;
    }
};
class source
{
private:
    int tola;

public:
    void getinput()
    {
        cout << "Enter the value in tola" << endl;
        cin >> tola;
    }
    operator destination()
    {
        float gm = tola * 11.664;
        return destination(gm);
    }
};
int main()
{
    source s1;
    destination d1;
    s1.getinput();
    d1 = s1;
    d1.display();
    return 0;
}