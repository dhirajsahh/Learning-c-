#include <iostream>
#include <fstream>
using namespace std;
class person
{
    char name[30];
    char faculty[20];
    int id;

public:
    void getinput()
    {
        cout << "Enter the student details name faculty and id" << endl;
        cin >> name >> faculty >> id;
    }
    void showdata()
    {
        cout << "The student details are" << endl;
        cout << "Name=" << name << endl;
        cout << "faculty=" << faculty << endl;
        cout << "id=" << id << endl;
    }
};
int main()
{
    person p[3];
    int i = 0;
    ifstream file("data.bin");
    for (i = 0; i < 3; i++)
    {

        file.read((char *)(&p[i]), sizeof(p[i]));
        p[i].showdata();
    }
    return 0;
}
