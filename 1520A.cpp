#include <iostream>
using namespace std;

int main() {
    int t;
    cin>> t;

    while(t--) {
        int n;
        cin>> n;

        string alp;
        cin>> alp;

        int i=0;
        bool ok = true;
        while(i<n) {
            char c = alp[i];
            while(i<n && alp[i] == c) i++;

            for(int j=i; j<n; j++) {
                if(alp[j] == c) {
                    ok = false;
                    break;
                }
            }
            if(!ok) break;
        }
        cout<< (ok ? "YES" : "NO")<< '\n';
    }

    return 0;
}