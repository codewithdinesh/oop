// Operator overloading
// gives special meaning to the operator

#include <iostream>
using namespace std;

class MyClass
{
private:
    int a, b;

public:
    MyClass(int x = 0, int y = 0)
    {
        a = x;
        b = y;
    }

    MyClass operator+(MyClass const &obj)
    {
        MyClass res;
        res.a = a + obj.a;
        res.b = b + obj.b;

        return res;
    }

    void display()
    {
        cout << "a= " << a << "\n b= " << b << endl;
    }
};

int main(int argc, char const *argv[])
{
    MyClass obj1(10, 20);
    MyClass obj2(30, 40), obj3;

    obj3 = obj1 + obj2;

    obj3.display();

    return 0;
}
