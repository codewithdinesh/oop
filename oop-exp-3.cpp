/* Author : Dinesh Shankar Rathod
 Roll No : SA73
 Batch : C
 Assignment 3 : Inheritance (Hierarchical)*/
#include <iostream>
using namespace std;
class publication // Base class
{
private:
    string title;
    float price;

public:
    void accept_p() // Member Function of base class
    {
        cout << "Enter the title : " << endl;
        cin >> title;
        cout << "Enter the Price : " << endl;
        cin >> price;
    };
    void display_p() // Member function of base class
    {
        cout << "The title is : " << title << endl;
        cout << "The price is : " << price << endl;
    };
};
class Book : public publication // Derived class 1
{
private:
    int page_count;

public:
    void accept_b() // Member function of derived class
    {
        cout << "Enter the page count of book : " << endl;
        cin >> page_count;
    };
    void display_b() // Member function of derived class
    {
        cout << "The page count of book is : " << page_count << endl;
    };
};
class Tape : public publication // Derived class 2
{
private:
    float time;

public:
    void accept() // Member function of derived class
    {
        cout << "Enter the time of tape in min : " << endl;
        cin >> time;
    };
    void display() // Member function of derived class
    {
        cout << "The run time of tape is : " << time << " min" << endl;
    };
};
int main()
{
    Book b1;

    Tape t1;

    int i;
    do
    {
        cout << "!****MENU****!" << endl;
        cout << "\n1. Book \n2.Tape \n3.Exit" << endl;
        cin >> i;

        switch (i)
        {
        case 1:
            cout << "\nEnter the details of book: " << endl;
            b1.accept_p();
            b1.accept_b();
            b1.display_p();
            b1.display_b();
            break;
        case 2:
            cout << "\nEnter The details of Tape: " << endl;
            t1.accept_p();
            t1.accept();
            t1.display_p();
            t1.display();
        default:
            cout << "Thank You";
            break;
        }
    } while (i != 3);
}
