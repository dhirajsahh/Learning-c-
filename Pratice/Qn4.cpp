#include <iostream>
#include <string.h>
using namespace std;
class String
{
private:
    char str[20];

public:
    void getdata()
    {
        cout << "Enter the String " << endl;
        cin >> str;
    }
    void display()
    {
        cout << "The concated string is " << str << endl;
    }
    friend String operator+(String, String);
};
String operator+(String s1, String s2)
{
    String temp;
    strcpy(temp.str, s1.str);
    strcat(temp.str, s2.str);
    return temp;
}
int main()
{
    String s1, s2, s3;
    s1.getdata();
    s2.getdata();
    s3 = s1 + s2;
    s3.display();
    return 0;
}