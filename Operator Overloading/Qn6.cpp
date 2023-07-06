#include <iostream>
using namespace std;
class test
{
    char fname[20], lname[20];
    char fullname[40];

public:
    void getname()
    {
        cout << "Enter the first name and lastname" << endl;
        cin >> fname >> lname;
    }
    test operator+(test t1)
    {
        test temp;
        }
};