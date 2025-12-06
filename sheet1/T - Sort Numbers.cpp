#include <bits/stdc++.h>
using namespace std;

void fast()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int main() {
    fast();
    int a,b,c;
    cin>>a>>b>>c;

    int mx = 0;
    int mn = 0;
    int md = 0;
    if(a>=b && a>=c)
    {
        mx=a;
        if (b<=c && b<=a)
        {
            mn = b;
            md = c;
        }
        else
        {
            mn = c;
            md = b;
        }
    }
    else if (b>=a && b>=c)
    {
        mx = b;
        if (a<=c && a<=b)
        {
            mn = a;
            md = c;
        }
        else
        {
            mn = c;
            md = a;
        }
    }
    else
    {
        mx = c;
        if (a<=c && a<=b)
        {
            mn = a;
            md =b;
        }
        else
        {
            mn = c;
            md = a;
        }
    }
    cout<<mn<<endl;
    cout<<md<<endl;
    cout<<mx<<endl;
    cout<<endl;
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    return 0;
}
