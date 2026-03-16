#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
    
    int t;
    cin>> t;

    while(t--) {
        long long a,b,n;
        cin>> a>> b>> n;

        if(b>=a) {
            cout<< a<< '\n';
            for(long long i=0; i<n; i++) {
                long long x;
                cin>> x;
            }
            continue;
        }

        long long ans = b;
        for(long long i=0; i<n; i++) {
            long long x;
            cin>> x;

            ans += min(x, a-1);
        }

        cout<< ans<< '\n';
    }

    return 0;
}

// work from home