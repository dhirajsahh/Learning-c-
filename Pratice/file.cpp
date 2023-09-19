#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream writedata("details.txt");
    char name[20];
    while (writedata.eof() == 0)
    {
        cout << "the name of the person" << endl;
        writedata >> name;
        cout << name << endl;
    }

    return 0;
}