#include <bits/stdc++.h>
using namespace std;

void fast()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}






int main() {
    fast();
    char ch;
    cin>>ch;
    if (int(ch) >=97 && int(ch) <=122)
    {
        ch = int(ch) - 32;
        cout<<ch<<endl;
    }
    else
    {
        ch = int(ch)+32;
        cout<<ch<<endl;
    }

    return 0;
}
