#include <iostream>
using namespace std;

int main() {
    int t;
    cin>> t;

    while(t--) {
        int n,k;
        cin>> n>> k;

        long long prod = 1;

        for(int i=0; i<n; i++) {
            int x;
            cin>> x;

            prod *= x;
        }

        if(2023 % prod == 0) {
            cout<< "YES"<< '\n';
            cout<< (2023/prod);

            for(int i=1; i<k; i++) {
                cout<< " 1";
            }

            cout<< '\n';
        }

        else {
            cout<< "NO"<< '\n';
        }
    }

    return 0;
}