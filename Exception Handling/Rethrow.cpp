#include <iostream>
using namespace std;
int main()
{
   int x, a, b;
   cout << "Enter the value of a and b" << endl;
   cin >> a >> b;
   x = a - b;
   try
   {
      if (x != 0)
      {
         cout << "Dividing number by their differece " << (a + b) / x << endl;
      }
      else
      {
         throw x;
      }
   }
   catch (int n)
   {
      cout << "The number cannnot be used as divider " << n << endl;
      throw;
   }
   return 0;
}
