#include <iostream>
using namespace std;

int main() {
    int t;
    cin>> t;

    while(t--) {
        int n;
        cin>> n;

        int count = 0;

        for(int i=0; i<n; i++) {
            int x;
            cin>> x;

            if(x == 1 || x == 3) count++;
        }

        cout<< count<< '\n';
    }

    return 0;
}