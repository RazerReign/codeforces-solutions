#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin>> t;

    while(t--) {
        int n,x;
        cin>> n>> x;

        vector<int> alp(2*n);

        for(int i=0; i<2*n; i++) {
            cin>> alp[i];
        }

        sort(alp.begin(), alp.end());

        bool ok = true;

        for(int i=0; i<n; i++) {
            if(alp[n+i] - alp[i] < x) {
                ok = false;
                break;
            }
        }

        cout<< (ok ? "YES" : "NO") << '\n';
    }

    return 0;
}