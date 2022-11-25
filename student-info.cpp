#include <iostream>

using namespace std;

class Student
{

private:
    int roll_no;
    long phone_no, adhar_no, driving_licence_no;
    string name, clas, blood_group;

public:
    Student(int roll_no, long phone, long adhar_no, long licence_no, string name, string clas, string blood_group)
    {

        roll_no = roll_no;
        adhar_no = adhar_no;
        name = this->name;
        clas = clas;
        blood_group = blood_group;
        driving_licence_no = licence_no;
        phone_no = phone;
    }

    void getInfo()
    {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << roll_no << endl;
        cout << "Class : " << clas << endl;
        cout << "Phone No: " << phone_no << endl;
        cout << "Adhar No: " << adhar_no << endl;
        cout << "Driving licence  No: " << driving_licence_no << endl;
    }
};

int main(int argc, char const *argv[])
{
    /* code */

    Student s1(1, 9876543210, 111122224444,12, "Dinesh", "AI and DS 2nd Year", "B+");

    s1.getInfo() ;
    return 0;
}
