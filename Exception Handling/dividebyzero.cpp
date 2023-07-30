#include <iostream>
using namespace std;
int main()
{
    float x, y, a;
    cout << "Enter the value of x and y" << endl;
    cin >> x >> y;
    a = x - y;
    try
    {
        if (a==0)
        {
        	throw a;  
          }
        else
        {
          float z = ((x + y)/a);
            cout << "the result of dividing sum of x and y by their difference  is" << z << endl;  
        
        }
    }
    catch (float a1)
    {
        cout << "dividing by zero occurs" << a1 << endl;
    }
    return 0;
}
