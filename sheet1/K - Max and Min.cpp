#include <iostream>
#include <cmath>
 
using namespace std;
 
int main()
{
    long long  a , b, c;
    cin >> a >> b >> c;
    long long min , max;
    if (a >= b && a >= c)
    {
        max =a;
        if (b<a && b<c)
        {
            min =b;
        }
        else
        {
            min = c;
        }
    }
    else if (b>=a && b>=c)
    {
        max = b ;
        if (a<=b && a<=c)
        {
            min = a;
        }
        else
        {
            min = c;
        }
    }
    else
    {
        max = c;
        if (a<=b && a<=c)
        {
            min = a;
        }
        else
        {
            min = b;
        }
    }
    cout<<min<<" "<<max<<endl;
}
