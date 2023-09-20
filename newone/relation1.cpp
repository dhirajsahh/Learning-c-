#include <iostream>
using namespace std;
class rupees
{
private:
    int rs;

public:
    void getinput()
    {
        cin >> rs;
    }
    int operator>(rupees r1)
    {
        if (rs > r1.rs)
        {
            return (1);
        }
        else
            return (0);
    };
};
int main()
{
    rupees r1, r2;
    cout << "Enter the value of first rupees" << endl;
    r1.getinput();
    cout << "Enter the value of the second rupees" << endl;
    r2.getinput();
    if (r1 > r2)
    {
        cout << "first rupees is greater than second rupeee" << endl;
    }
    else
        cout << "second rupees is greater than first rupeee" << endl;
    return 0;
}