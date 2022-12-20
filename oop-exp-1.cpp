/*
    Author : Dinesh Shankar Rathod
    Roll No : SA73
    Batch : C
______________________Assignment 1 : Operator overloading____________________*/
#include <iostream>
using namespace std;

class complex // class declared
{
private: // Access specifier
    int realpart;
    int imgpart;

public:
    complex() { realpart = imgpart = 0; }             // Default constructor
    complex operator+(complex);                       // + operator overloaded
    complex operator*(complex);                       // * operator overloaded
    friend istream &operator>>(istream &, complex &); // insertion operator overloading using  friend function
    friend ostream &operator<<(ostream &, complex &); // extraction operator overloading using  friend function.
    void display();                                   // display function
};
complex complex ::operator+(complex c) // Operator overloading defined
{
    complex temp;
    temp.realpart = realpart + c.realpart;
    temp.imgpart = imgpart + c.imgpart;
    return (temp);
}
complex complex ::operator*(complex c) // Operator overloading defined
{
    complex temp;
    temp.realpart = (realpart * c.realpart) - (imgpart * c.imgpart);
    temp.imgpart = (realpart * c.imgpart) - (imgpart * c.realpart);
    return (temp);
}

istream &operator>>(istream &in, complex &c)
{
    // Operator overloading defined
    cout << "Enter Real Part : " << endl;
    in >> c.realpart;
    cout << "Enter imaginary part :" << endl;
    in >> c.imgpart;
    return in;
}

ostream &operator<<(ostream &out, complex &c)
{
    out
        << c.realpart << "+" << c.imgpart << "i" << endl;
    return out;
}

void complex ::display() // function defined
{
    cout << "Complex Number is : " << realpart << "+" << imgpart << "i" << endl;
}
int main()
{
    complex C1, c2, c3, c4;
    cin >> C1;
    cout << "The first Complex number is :" << C1;
    cin >> c2;
    cout << "The second Complex number is :" << c2;
    c3 = C1 + c2;
    c4 = C1 * c2;
    // Menu Driven //
    int i;
    do
    {
        cout << "\t\n*****Menu****\n\t" << endl;
        cout << "\n1. ADDITION \n2. MULTIPLICATION \n3. EXIT" << endl;
        cout << "Enter the choice in between 1 to 3 :";
        cin >> i;
        switch (i)
        {
        case 1:
            cout << "ADDITION:\n";
            c3.display();
            break;
        case 2:
            cout << "MULTIPLICATION:\n";
            c4.display();
        default:
            cout << "Thank You!!";
            break;
        }
    } while (i != 3);
    return 0;
}
// Output //
// Enter Real Part : 200 Enter imaginary part : 500 The first Complex number is : 200 + 500i Enter Real Part : 100 Enter imaginary part : 300 The second Complex number is : 100 + 300i * ****Menu *** * 1. ADDITION 2. MULTIPLICATION 3. EXIT Enter the choice in between 1 to 3 : 1 ADDITION : Complex Number is : 300 + 800i * ****Menu *** * 1. ADDITION 2. MULTIPLICATION 3. EXIT Enter the choice in between 1 to 3 : 2 MULTIPLICATION : Complex Number is : -130000 + 10000i Thank You !!*****Menu * ***1. ADDITION 2. MULTIPLICATION 3. EXIT Enter the choice in between 1 to 3 : 3 Thank You !!
