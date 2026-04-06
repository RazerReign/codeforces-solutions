#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin>> t;
    
    while(t--) {
        int n,j,k;
        cin>> n>> j>> k;

        vector<int> alp(n);

        int strength = 0;
        int mx = 0;

        for(int i=0; i<n; i++) {
            cin>> alp[i];
            
            if(i+1==j) strength = alp[i];
            mx = max(mx, alp[i]);
        }

        if(k >= 2 || strength == mx) {
            cout<< "YES"<< '\n';
        }

        else {
            cout<< "NO"<< '\n';
        }
    }

    return 0;
}