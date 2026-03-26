#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>> t;

    while(t--) {
        int n;
        cin>> n;

        vector<long long> alp(n);

        for(int i=0; i<n; i++) {
            cin>> alp[i];
        }

        long long ans = 0;
        long long current = 0;
        
        for(int i=0; i<n; i++) {
            if(current > alp[i]) {
                ans++;
            }

            else {
                current = alp[i];
            }
        }

        cout<< ans<< '\n';
    }

    return 0;
}