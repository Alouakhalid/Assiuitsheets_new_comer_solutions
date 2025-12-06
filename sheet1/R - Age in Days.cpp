#include <bits/stdc++.h>
using namespace std;

void fast()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int main() {
    fast();
    int d;
    cin>>d;

    int years = d/365;
    cout<<years<<" years"<<endl;
    int flag_1 = d - years*365;
    int months = flag_1/30;
    cout<<months<<" months"<<endl;
    int days = flag_1 - months*30;
    cout<<days<<" days"<<endl;

    return 0;
}
