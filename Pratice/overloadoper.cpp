// Wriie a program to compare two amount in Rupee by overloading greater than (>) operator using the concept of operator overloading.

#include <iostream>
using namespace std;
class rupee
{
private:
    float rs;

public:
    void getdata()
    {
        cout << "Enter the value of rupees" << endl;
        cin >> rs;
    }
    void display()
    {
        cout << "The value of rupess is" << rs << endl;
    }
    int operator>(rupee r1)
    {
        if (rs > r1.rs)
        {
            return 1;
        }
        else
            return 0;
    }
};

int main()
{
    rupee r1, r2;
    r1.getdata();
    r2.getdata();
    if (r1 > r2)
    {
        cout << "r1 is greater" << endl;
        r1.display();
    }
    else
    {
        cout << "r2 is greatest" << endl;
        r2.display();
    }
    return 0;
}