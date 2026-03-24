#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    int t;
    if(!(cin>> t)) return 0;

    while(t--) {
        int n;
        if(!(cin>> n)) break;

        vector<int> alp(n-1);

        bool read = true;

        for(int i=0; i<n-1; i++) {
            if(!(cin>> alp[i])) {
                read = false;
                break;
            }
        }

        if(!read) break;

        bool possible = true;

        for(int i=1; i<n-2; i++) {
            if(alp[i-1] == 1 && alp[i] == 0 && alp[i+1] == 1) {
                possible = false;
                break;
            }

        }

        cout<< (possible ? "YES" : "NO") << '\n';
    }

    return 0;
}