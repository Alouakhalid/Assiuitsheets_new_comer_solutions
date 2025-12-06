#include <bits/stdc++.h>
using namespace std;

void fast()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int main(){
    int a;
    cin>>a;
    char s;
    cin>>s;
    int b;
    cin>>b;
    char c;
    cin>>c;
    int r;
    cin>>r;
    if (s=='+')
    {
        if (a+b == r)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<a+b<<endl;
        }
    }
    else if (s=='-')
    {
        if (a-b==r)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<a-b<<endl;
        }
    }
    else if (s=='*')
    {
        if (a*b==r)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<a*b<<endl;
        }
    }
    else if (s=='/')
    {
        if (a%b==r)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<a/b<<endl;
        }
    }
}
