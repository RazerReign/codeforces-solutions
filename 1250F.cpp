#include <iostream>
using namespace std;

int main() {
    long long n;
    cin>> n;

    long long mn = __LONG_LONG_MAX__;

    for(long long i=1; i*i <= n; i++) {
        if(n%i == 0) {
            long long a = i;
            long long b = n/i;
            long long p = 2*(a+b);
            if(p<mn) mn = p;
        }
    }

    cout<< mn << '\n';

    return 0;
}