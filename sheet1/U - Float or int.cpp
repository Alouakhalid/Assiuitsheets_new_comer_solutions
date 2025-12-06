#include <bits/stdc++.h>
using namespace std;

void fast()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int main() {
    fast();
    double a;
    cin>>a;
    int b = int(a);

    if (b==a)
    {
        cout<<"int "<<b<<endl;
    }
    else{

            cout<<"float "<<b<<" "<<float(a-b)<<endl;
        }


    return 0;
}
