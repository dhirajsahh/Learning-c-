// wap to convet nepali rupess (i.e single value expressed in Rs ) in Dollar and Cent. Assume 1$=Rs.70 and 100cent =1$
#include <iostream>
#include <conio.h>
using namespace std;
class convertMoney
{
    int dollar;
    float cent;

public:
    convertMoney()
    {
        dollar = 0;
        cent = 0.0;
    }
    convertMoney(int Rs)
    {
        float totaldollar = Rs / 70.0;
        dollar = int(totaldollar);
        cent = (totaldollar - dollar) * 100;
    }
    void display()
    {
        cout << "The dollar is :" << dollar << endl;
        cout << "The cent is :" << cent << endl;
    }
};
int main()
{
    convertMoney c1 = 345;
    c1.display();
    return 0;
}
