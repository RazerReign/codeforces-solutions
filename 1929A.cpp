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

        vector<int> alp(n);

        for(int i=0; i<n; i++) {
            cin>> alp[i];
        }

        int mini = *min_element(alp.begin(), alp.end());

        int maxi = *max_element(alp.begin(), alp.end());

        cout<< maxi-mini<< '\n';
    }

    return 0;
}