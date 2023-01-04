#include <iostream>
using namespace std;

class complex
{
private:
    int a;
    float b;

public:
    complex(int x, float y); //Parameterize Constructor

    void showdata()
    {
        cout << a << " " << b << endl;
    }

    complex()                //Default Constructor
    {

    }

    complex(complex &c)      //Copy Constructor
    {
        a = c.a;
        b = c.b;
    }
};

complex::complex(int x, float y)
{
    a = x;
    b = y;
}

int main()
{
    complex c1(7, 3.0), c2;
    c1.showdata();
    complex c3(c1);
    c3.showdata();
}
