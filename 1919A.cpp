#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>> t;

    while(t--) {
        long long n,m;
        cin>> n>> m;

        if(abs(n-m) % 2 == 0) {
            cout<< "Bob"<< '\n';
        }

        else {
            cout<< "Alice"<< '\n';
        }
    }

    return 0;
}