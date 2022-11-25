#include <iostream>
using namespace std;

class Complex
{
private:
    int real, img;

public:
    Complex(int r = 0, int i = 0)
    {
        real = r;
        img = i;
    }

    Complex operator+(Complex const &obj)
    {
        Complex res;
        res.real = real + obj.real;
        res.img = img + obj.img;
        return res;
    }

    Complex operator*(Complex const &obj)
    {
        Complex res;
        res.real = real * obj.real;
        res.img = img * obj.img;
        return res;
    }

    Complex operator/(Complex const &obj)
    {
        Complex res;
        res.real = real / obj.real;
        res.img = img / obj.img;
        return res;
    }

    void display()
    {
        cout << real << "i" << img;
    }
};
 int main(int argc, char const *argv[])
{

    Complex obj1(20, 5), obj2(5, 2), obj3;
    obj3 = obj1 + obj2;

    obj3.display();
    /* code */
    return 0;
}
