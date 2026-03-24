#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);


    long long t;
    cin>> t;

    while(t--) {
        long long n,h,k;
        cin>> n>> h>> k;

        long long prev = 0;
        bool ok = false;

        for(int i=0; i<n; i++) {
            long long l,r;
            cin>> l>> r;

            if(l - prev >= h) {
                ok = true;
            }

            prev = max(prev, r);
        }

        if(k - prev >= h) {
            ok = true;
        }

        cout<< (ok ? "YES" : "NO")<< '\n';
    }

    return 0;
}