#include <iostream>
using namespace std;

class Myclass
{
private:
    int a, int b;

public:
    Myclass(int x, int y)
    {
        a = x;
        b = y;
    };

    Myclass(Myclass const &obj)
    {
    }
}