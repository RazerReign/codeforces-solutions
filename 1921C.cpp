#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>> t;

    while(t--) {
        long long n,c,a,b;
        cin>> n>> c>> a>> b;

        vector<long long> m(n+1);

        m[0] = 0;

        for(int i=1; i<=n; i++) {
            cin>> m[i];
        }

        for(int i=1; i<=n; i++) {
            long long diff = m[i] - m[i-1];
            c-=min(a*diff,b);
        }
        
        cout<< (c>0 ? "Yes" : "No") << '\n';
    }

    return 0;
}