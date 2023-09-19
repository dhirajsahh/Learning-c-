// wap to read record of 10 books with approprirate attributes from user and write it to a file
#include <iostream>
#include <conio.h>
#include <fstream>
using namespace std;
class Book
{
private:
    char bookname[20];
    int price;
    char author[20];

public:
    void getdata()
    {
        cout << "Enter the details of the book" << endl;
        cout << "Enter name" << endl;
        cin >> bookname;
        cout << "Enter the price of the book" << endl;
        cin >> price;
        cout << "Enter the author name" << endl;
        cin >> author;
    }
    void display()
    {
        cout << "bookname" << bookname << endl;
        cout << "price" << price << endl;
        cout << "authorname" << author << endl;
    }
};
int main()
{
    Book b[10], ob[10];
    // ofstream bk("books.txt");
    // for (int i = 0; i < 10; i++)
    // {
    //     b[i].getdata();
    //     bk.write((char *)(&b[i]), sizeof(b[i]));
    // }
    // bk.close();
    ifstream bk("books.txt");
    for (int i = 0; i < 10; i++)
    {
        bk.read((char *)(&b[i]), sizeof(b[i]));
        b[i].display();
    }
    bk.close();
    return 0;
}