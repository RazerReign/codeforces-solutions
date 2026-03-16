#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>> n;

    vector<int> ans(n);

    for(int i=0; i<n; i++) {
        int p;
        cin>> p;

        ans[p-1] = i+1;
    }

    for(int i=0; i<n; i++) {
        cout<< ans[i]<< (i< n-1 ? " " : "\n");
    }

    return 0;
}