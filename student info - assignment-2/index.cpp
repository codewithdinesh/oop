#include <iostream>

using namespace std;

class Student
{
private:
    int roll;
    string name;

public:
    Student()
    {
        cout << "Hi Im constrcutor\n";
    };
    void putData()
    {
        cout << "Enter Name: ";
        cin >> name;

        cout << "\nEnter Roll no. :";
        cin >> roll;
    }

    void getData()
    {
        cout << "\nStudent Info: " << endl;
        cout << "Name: " << name;
        cout << "\nRoll No: " << roll << endl;
    }
    ~Student()
    {
        cout << "\n This is destructor";
    };
};

int main(int argc, char const *argv[])
{
    /* code */

    Student s1[10];

    for (int i = 0; i < 2; i++)
    {
        s1[i].putData();
    }

    for (int i = 0; i < 2; i++)
    {
        s1[i].getData();
    }

    // s1[1].getData();
    // s1.putData();
    return 0;
}
