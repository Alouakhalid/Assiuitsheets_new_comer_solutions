
#include <bits/stdc++.h>
using namespace std;

void fast() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int main() {
    fast();

    long double a, b, c, d;

    if (!(cin >> a >> b >> c >> d)) {
        return 0; 
    }


    long double x = b * logl(a);
    long double y = d * logl(c);

    if (x > y)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
