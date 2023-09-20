#include <iostream>
#include <fstream>
using namespace std;
class student
{
private:
    int roll;
    char name[20];
    char fcty[10];

public:
    void getdata()
    {
        cout << "Enter the data of the student" << endl;
        cout << "Enter the name" << endl;
        cin >> name;
        cout << "Enter the roll no" << endl
             << "faculty" << endl;
        cin >> roll >> fcty;
    }
    void showdata()
    {
        cout << "The name of the person is " << name << endl;
        cout << "roll no is " << roll << endl;
        cout << "faculty  " << fcty << endl;
    }
};
int main()
{
    student s[2];
    // ofstream fout("student.txt", ios::app);
    // for (int i = 0; i < 2; i++)
    // {
    //     s[i].getdata();
    //     fout.write((char *)(&s[i]), sizeof(s[i]));
    // }
    // fout.close();
    ifstream inf("student.txt");
    if (inf.bad())
    {
        cout << "Error in opening in file" << endl;
    }
    else
    {

        for (int i = 0; i < 2; i++)

        {

            inf.read((char *)(&s[i]), sizeof(s[i]));
            s[i].showdata();
        }
    }
    inf.close();
}