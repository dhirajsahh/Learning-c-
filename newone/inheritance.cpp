#include <iostream>
using namespace std;
class person
{

protected:
    char name[30];

public:
    void getname()
    {
        cout << "Enter the name" << endl;
        cin >> name;
    }
};
class student : public person
{
private:
    char faculty[10];

public:
    void getinput()
    {
        cout << "Enter your faculty" << endl;
        cin >> faculty;
    }
    void display()
    {
        cout << "Name=" << name << endl;
        cout << "faculty=" << faculty << endl;
    }
};
class actor : public person
{
private:
    char movie[20];

public:
    void getinput()
    {
        cout << "Enter your movie" << endl;
        cin >> movie;
    }
    void display()
    {
        cout << "Name=" << name << endl;
        cout << "movie=" << movie << endl;
    }
};
class leader : public person
{
private:
    char city[10];

public:
    void getinput()
    {
        cout << "Enter your movie" << endl;
        cin >> city;
    }
    void display()
    {
        cout << "Name=" << name << endl;
        cout << "city=" << city << endl;
    }
};
int main()
{
    student s1;
    actor a1;
    leader l1;
    s1.getname();
    s1.getinput();
    a1.getname();
    a1.getinput();
    l1.getname();
    l1.getinput();
    s1.display();
    l1.display();
    a1.display();
    return 0;
}