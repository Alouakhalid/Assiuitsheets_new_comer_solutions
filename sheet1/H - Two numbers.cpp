#include <iostream>
#include <cmath>

using namespace std;

int main()
{
   double a, b;

   if (!(cin >> a >> b)) {
      return 1;
   }

   double result = a / b;

   cout << "floor " << a << " / " << b << " = " << floor(result) << endl;

   cout << "ceil " << a << " / " << b << " = " << ceil(result) << endl;

   cout << "round " << a << " / " << b << " = " << round(result) << endl;

   return 0;
}
