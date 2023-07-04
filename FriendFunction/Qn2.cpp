#include <iostream>
using namespace std;
class firstnumber;
class secondnumber
{
    int b = 5;
    friend void sum(firstnumber, secondnumber);
};
class firstnumber
{
    int a = 3;
    friend void sum(firstnumber, secondnumber);
};
void sum(firstnumber c1, secondnumber c2)
{
    cout << "The sum is " << c1.a + c2.b;
}
int main()
{
    firstnumber c1;
    secondnumber c2;
    sum(c1, c2);
}