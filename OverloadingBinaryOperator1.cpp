#include <iostream>
using namespace std;

class binaryop
{
  int a, b;

public:
  binaryop()
  {
  }
  binaryop(int x, int y)
  {
    a = x;
    b = y;
  }
  void display()
  {
    cout << a << " " << b << endl;
  }
  binaryop operator+(binaryop a1);
};
binaryop binaryop::operator+(binaryop a1)
{
  binaryop temp;
  temp.a = a + a1.a;
  temp.b = b + a1.b;
  return (temp);
}
int main()
{
  binaryop a1(7, 30), a2(7, 30), a3;
  a1.display();
  a2.display();
  a3 = a2 + a1;
  a3.display();
}
