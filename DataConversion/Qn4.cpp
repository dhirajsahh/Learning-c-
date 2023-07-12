#include <iostream>
#include <conio.h>
using namespace std;
class Distance
{
    float inch;

public:
    void input()
    {
        cout << "Enter the value of inch" << endl;
        cin >> inch;
    }
    operator float()
    {
        float ft = inch / 12.0;
        return ft;
    }
};
int main()
{
    float feet;
    Distance D1;
    D1.input();
    feet = D1;
    cout << "The value of ft is" << feet << endl;
    getch();
    return (0);
}