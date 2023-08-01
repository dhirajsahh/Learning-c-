// Write a program to concatenate two user given srring using the concept of operator overloading
#include <iostream>
#include <string.h>
using namespace std;
class data
{
private:
    char string[20];

public:
    void getinput()
    {
        cout << "Enter the string " << endl;
        cin >> string;
    }
    void display()
    {
        cout << "The concated string is" << string << endl;
    }
    data operator+(data t)
    {
        data temp;
        strcpy(temp.string, string); // here string =d1 ko string and t.string ==d2 ko string;
        strcat(temp.string, t.string);
        return temp;
    }
};

int main()
{
    data d1, d2, d3;
    d1.getinput();
    d2.getinput();
    d3 = d1 + d2;
    d3.display();
    return 0;
}