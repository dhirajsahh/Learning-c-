#include <iostream>
#include <string.h>
using namespace std;
class concatenate
{
private:
    char str[20];

public:
    void getinput()
    {
        cout << "Enter the string" << endl;
        cin >> str;
    }
    void displaydata()
    {
        cout << str << endl;
    }
    // friend concatenate operator+(concatenate c1, concatenate c2)
    // {
    //     concatenate temp;
    //     strcpy(temp.str, c1.str);
    //     strcat(temp.str, c2.str);
    //     return temp;
    // }
    concatenate operator+(concatenate c1)
    {
        concatenate temp;
        strcpy(temp.str, str);
        strcat(temp.str, c1.str);
        return temp;
    }
};
int main()
{
    concatenate c1, c2, c3;
    c1.getinput();
    c2.getinput();
    c3 = c1 + c2;
    cout << "the first string is" << endl;
    c1.displaydata();
    cout << "the second string is" << endl;
    c2.displaydata();
    cout << "The concated stirng is";
    c3.displaydata();
}