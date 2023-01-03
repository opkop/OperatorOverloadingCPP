#include <iostream>
using namespace std;

class unaryop
{
private:
    int a, b, c;

public:
    unaryop(int x, int y, int z) //Parametirized Constructor
    {
        a = x;
        b = y;
        c = z;
    }
    void display()
    {
        cout << a << " " << b << " " << c << endl;
    }

    void operator-();
};

void unaryop::operator-()
{
    a = -a;
    b = -b;
    c = -c;
}

int main()
{
    unaryop a1(1, 2, 3);
    a1.display();
    -a1;
    a1.display();
}