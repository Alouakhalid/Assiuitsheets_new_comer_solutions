#include <bits/stdc++.h>
using namespace std;
 
int main() {
    char ch ;
    cin >> ch ;
    if (int(ch)>=48 && int(ch)<=57)
    {
        cout<<"IS DIGIT"<<endl;
    }
    else if (int(ch)>=97 && int(ch)<=122)
    {
        cout<<"ALPHA"<<endl;
        cout<<"IS SMALL"<<endl;
    }
 
    else
    {
        cout<<"ALPHA"<<endl;
        cout<<"IS CAPITAL"<<endl;
    }
}
