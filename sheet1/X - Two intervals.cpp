#include<bits/stdc++.h>


using namespace std;

void fast() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int main() {
    fast();
    long long l1, r1, l2, r2;
    cin >> l1 >> r1 >> l2 >> r2;

    long long intersection_start = max(l1, l2);
    long long intersection_end = min(r1, r2);

    if (intersection_start <= intersection_end) {
        cout << intersection_start << " " << intersection_end << endl;
    } else {
        cout << -1 << endl;
    }

    return 0;
}
