#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    int n;
    cin>> n;

    int thomas = 0;

    for(int i=0; i<4; i++) {
        int x;
        cin>> x;

        thomas += x;
    }

    int better = 0;

    for(int i=1; i<n; i++) {
        int total = 0;

        for(int j=0; j<4; j++) {
            int x;
            cin>> x;

            total += x;
        }

        if(total > thomas) better++;
    }

    cout<< 1+better << '\n';

    return 0;
}