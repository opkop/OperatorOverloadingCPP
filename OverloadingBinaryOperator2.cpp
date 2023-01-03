#include <iostream>
using namespace std;

class binaryop
{
  int a, b;

public:
  binaryop()
  {
  }

    binaryop(int x)
  {
    a = x;
  }
  void display()
  {
    cout << a <<endl;

  }
  binaryop operator+(binaryop a1);
};
binaryop binaryop::operator+(binaryop a1)
{
  a = a + a1.a;
  return (a);
}
int main()
{
  binaryop a1(7), a2(7), a3;
  a1.display();
  a2.display();
  a3 = a2 + a1;
  a3.display();
}
