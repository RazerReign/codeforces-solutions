#include <iostream>
using namespace std;

int main() {
    int t;
    cin>> t;

    while(t--) {
        int n,x;
        cin>> n>> x;

        int mx=0, st=0;
        
        for(int i=0; i<n; i++) {
            int p;
            cin>> p;

            mx = max(mx, p - st);
            st = p;
        }


        mx = max(mx, 2*(x-st));
        cout<< mx<< '\n';
    }

    return 0;
}