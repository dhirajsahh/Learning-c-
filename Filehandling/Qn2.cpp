#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int i;
    int id;
    char name[20], adress[30];
    ofstream data("student.txt");
    for (i = 0; i < 5; i++)
    {
        cout << "Enter the name adress and id" << endl;
        cin >> name >> adress >> id;
        data << name << endl
             << adress << endl
             << id << endl;
    }
    data.close();
    ifstream file("student.txt");
    for (i = 0; i < 5; i++)
    {
        file >> name >> adress >> id;
        cout << name << endl
             << adress << endl
             << id << endl;
    }
    file.close();
    return 0;
}