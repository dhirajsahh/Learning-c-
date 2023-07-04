#include <iostream>
using namespace std;
class student
{
    char name[20];
    int rollno;
    char address[20];
    float marks;

public:
    void getdata();
    void showdata(int phone);
};
void student ::getdata()
{
    cout << "Enter name rollno adress and marks" << endl;
    cin >> name >> rollno >> address >> marks;
}
void student ::showdata(int phone)
{
    cout << "Name:" << name << endl;
    cout << "rollno:" << rollno << endl;
    cout << "marks:" << marks << endl;
    cout << "adress:" << address << endl;
    cout << "phone" << phone << endl;
    int length;
    length = phone;
    cout << "lenth" << length;
}
int main()
{
    student student1;
    student1.getdata();
    student1.showdata(981012);
    return 0;
}