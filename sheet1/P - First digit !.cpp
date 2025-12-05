#include <bits/stdc++.h>
using namespace std;

void fast()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}






int main() {
    fast();
    string a;
    cin>>a;
    stringstream ss;
    ss<<a[0];

    int x= 0;
    ss>>x;

    if (x%2==0)
    {
        cout<<"EVEN"<<endl;
    }else
    {
        cout<<"ODD"<<endl;
    }
    return 0;
}
