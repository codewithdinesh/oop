/*
    Author : Dinesh Shankar Rathod
    Roll No : SA73
    Batch : C
    Assignment 4 : File handling */

#include <iostream> // input output stream
#include <fstream>  // file stream
#include <string.h>
using namespace std;
class student // class created
{
private:
    string name;
    int rollno;
    float marks;

public:
    void accept() // accept input function
    {
        ofstream o2;
        o2.open("data22.txt", ios::app); // file opened to add the data.
        if (o2.fail())
            cout << "Error in file creation" << endl;
        else
        {
            cout << "Enter Name of student : " << endl;
            cin >> name;
            cout << "Enter roll no of student :" << endl;
            cin >> rollno;
            cout << "Enter the marks of Student :" << endl;
            cin >> marks;
            o2 << name;
            o2 << " ";
            o2 << rollno;
            o2 << " ";
            o2 << marks;
            o2 << " ";
            o2 << "\n ";
            o2.close();
        }
    }
    void display() // File opened to read the data
    {
        ifstream i1;
        i1.open("data22.txt");
        if (i1.fail())
            cout << "Error" << endl;
        else
        {
            i1 >> name;
            i1 >> rollno;
            i1 >> marks;
            cout << name << " ";
            cout << rollno << " ";
            cout << marks << " ";
            cout << " \n ";
            i1.close();
        }
    }
};
int main()
{
    student s1;
    int i;
    do
    {
        cout << "\n ***** Menu ****";
        cout << "\n 1.Add student record \n 2.Display student record \n 3.Exit";
        cout << "Enter your choice - ";
        cin >> i;
        switch (i)
        {
        case 1:
            s1.accept();
            break;
        case 2:
            s1.display();
            break;

        default:
            cout << " Thank You !!" << endl;
            break;
        }
    } while (i != 3);
    return 0;
}
