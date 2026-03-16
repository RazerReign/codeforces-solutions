#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin>> t;

    while(t--) {
        int n;
        cin>> n;

        bool nottake[10] = {false};

        for(int i=0; i<n; i++) {
            int d;
            cin>> d;
            nottake[d] = true;
        }

        int allowed = 0;
        for(int i=0; i<10; i++) {
            if(!nottake[i]) allowed++;
        }

        long long ans = 0;
        if(allowed >= 2) {
            ans = 1LL * allowed * (allowed - 1) * 3;
        }

        cout<< ans<< '\n';

    }

    return 0;
}