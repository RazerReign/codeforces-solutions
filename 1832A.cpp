#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>> t;

    while(t--) {
        string k;
        cin>> k;

        int n = k.size();

        bool possible = false;

        for(int i=1; i<n/2; i++) {
            if(k[i] != k[0]) {
                possible = true;
                break;
            }
        }

        cout<< (possible ? "YES" : "NO")<< '\n';
    }

    return 0;
}