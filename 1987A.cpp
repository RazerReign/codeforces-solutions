#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>> t;

    while(t--) {
        int n,k;
        cin>> n>> k;

        long long ans = n+1LL*(n-1)*(k-1);

        cout<< ans<< '\n';
    }

    return 0;
}