#include<bits/stdc++.h> 

using namespace std;

void fast() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int main() {
    fast();
    long long a, b, c, d;
    cin >> a >> b >> c >> d;
    
    const long long M = 100;
    
    
    a = a % M;
    b = b % M;
    c = c % M;
    d = d % M;
    
    long long result = 1;
    result = (result * a) % M;
    result = (result * b) % M;
    result = (result * c) % M;
    result = (result * d) % M;
    
    
    cout << setfill('0'); 
    cout << setw(2);    
    cout << result << endl; 

    return 0;
}
