// Write a program to concatenate two user given srring using the concept of operator overloading
#include <iostream>
#include <string.h>
using namespace std;
class concate
{
private:
    char str[30];

public:
    void getdata()
    {
        cout << "Enter the string" << endl;
        cin >> str;
    }
    concate operator+(concate c1)
    {
        concate temp;
        strcpy(temp.str, str);
        strcat(temp.str, c1.str);
        return temp;
    }
    void display()
    {
        cout << "The concated string is" << str << endl;
    }
};
int main()
{
    concate c1, c2, c3;
    c1.getdata();
    c2.getdata();
    c3 = c1 + c2;
    c3.display();
    return 0;
}