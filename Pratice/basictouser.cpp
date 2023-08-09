#include <iostream>
using namespace std;
class Distance
{
    int feet, inch;

public:
    Distance()
    {
        feet = 0;
        inch = 0;
    }
    Distance(int m)
    {
        float totalfeet = m * 3.28;
        feet = int(totalfeet);
        inch = 12 * (totalfeet - feet);
    }
    void display()
    {
        cout << "The ft is " << feet << endl;
        cout << "The inch is" << inch << endl;
    }
};
int main()
{
    int m;
    cout << "Enter the vlaue of meter" << endl;
    cin >> m;
    Distance d1;
    d1 = m;
    d1.display();
    return 0;
}
