#include <iostream>
#include <string.h>
using namespace std;
class data
{
private:
    char str[20];

public:
    void getstring()
    {
        cout << "enter the string" << endl;
        cin >> str;
    }
    void display()
    {
        cout << "The concated string is " << str << endl;
    }
    data operator+(data s1)
    {
        data temp;
        strcpy(temp.str, str);
        strcat(temp.str, s1.str);
        return temp;
    }
};
int main()
{
    data s1, s2, s3;
    s1.getstring();
    s2.getstring();
    s3 = s1 + s2;
    s3.display();
    return 0;
}
