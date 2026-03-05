#include <iostream>
using namespace std;

void solve() {
    long long n,k;
    cin>> n>> k;

    string alp;
    cin>> alp;

    long long operation = 0;
    for(long long i = 0; i<n; i++) {
        if(alp[i] == 'B') {
            operation++;
            i += k-1;
        }
    }

    cout<< operation << '\n';
}

int main() {
    long long t;
    cin>> t;

    while(t--) {
        solve();
    }

    return 0;
}