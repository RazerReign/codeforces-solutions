#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    
    int n;
    cin>> n;

    vector<int> cnt(n+1, 0);

    for(int k=2; k<=n; ++k) {
        if (cnt[k] == 0) {
            for(int multiple = k; multiple <= n; multiple += k) {
                cnt[multiple]++;
            }
        }
    }

    int ans =0;

    for(int i=2; i<=n; ++i) {
        if(cnt[i]==2) ans++;
    }

    cout<< ans<< '\n';

    return 0;
}