#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int id;
    char name[20], adress[30];
    cout << "Enter the name adress and id" << endl;
    cin >> name >> adress >> id;
    ofstream data("student.txt");
    data << name << endl
         << adress << endl
         << id << endl;
    data.close();
    ifstream file("student.txt");
    file >> name >> adress >> id;
    cout << name << adress << id;
    file.close();
    return 0;
}