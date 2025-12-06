#include <bits/stdc++.h>
using namespace std;
 
void fast()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
 
int main(){
    int a ;
    cin>>a;
    char s;
    cin>>s;
    int b;
    cin>>b;
 
    if (s=='>')
    {
        if (a>b)
        {
            cout<<"Right"<<endl;
        }
        else
        {
            cout<<"Wrong"<<endl;
        }
 
    }
    else if (s=='<')
    {
        if (a<b)
        {
            cout<<"Right"<<endl;
        }
        else
        {
            cout<<"Wrong"<<endl;
        }
    }
    else if (s=='=')
    {
        if (a==b)
        {
            cout<<"Right"<<endl;
        }
        else
        {
            cout<<"Wrong"<<endl;
        }
    }
 
 
 
    return 0;
}
