#include <iostream>
#include <fstream>
using namespace std;
class person
{
    char name[30];

public:
    int marks;
    void inputdata()
    {
        cout << "enter the name" << endl;
        cin >> name;
        cout << "Enter the marks" << endl;
        cin >> marks;
    }
    void showdata()
    {
        cout << "Name:" << name << endl;
        cout << "Marks obtained:" << marks << endl;
    }
};
int main()
{
    person pers[3];
    fstream file("Student.txt");
    person p[3];
    for (int i = 0; i < 3; i++)
    {
        pers[i].inputdata();
        file.write((char *)(&pers[i]), sizeof(pers[i]));
    }
    int i = 0;
    while (file)
    {
        file.read((char *)(&p[i]), sizeof(p[i]));
        i++;
    }
    person a;
    for (i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (p[j].marks > p[j + 1].marks)
            {
                a = p[j];
                p[j] = p[j + 1];
                p[j + 1] = a;
            }
        }
    }
    for (i = 0; i < 3; i++)
    {
        p[i].showdata();
        cout << endl;
    }
    return 0;
}
