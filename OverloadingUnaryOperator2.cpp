#include <iostream>
using namespace std;

class unaryop
{
    int a, b;
    float c;

public:
    unaryop(int x, int y, int z)
    {
        a = x;
        b = y;
        c = z;
    }
    void operator++();
    void operator--();
    void display()
    {
        cout << a << " " << b << " " << c << endl;
    }
};

void unaryop::operator++()
{
    a = ++a; // Pre Increment
    b = ++b;
    c = ++c;
}

// void unaryop::operator--()
// {
//     a = --a; // Pre Decrement
//     b = --b;
//     c = --c;
// }

void unaryop::operator--()
{
    a = a--; // Post Decrement
    b = b--;
    c = c--;

}

int main()
{
    
    unaryop a1(2, 3, 4);
    a1.display();
    ++a1;
    a1.display();
    // --a1;
    // a1.display();
    --a1;
    a1.display();
    
}