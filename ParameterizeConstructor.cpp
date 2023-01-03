#include <iostream>
using namespace std;

class name
{
private:
   int a;
   float b;

public:
   name(int x, float y) // Parameterize Constructor
   {
      a = x;
      b = y;
      cout << x << " " << y << endl;
   }

   name(int x) // Parameterize Constructor
   {
      a = x;
      cout << x << endl;
   }
};

int main()
{
   name c1(1, 8.0), c2(5);
}