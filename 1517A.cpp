#include <iostream>
using namespace std;

int main() {
    int t;
    cin>> t;

    while(t--) {
        long long n;
        cin>> n;

        if(n%2050 != 0) {
            cout<< -1<< '\n';
            continue;
        }

        long long x = n/2050;
        int ans = 0;

        while(x > 0) {
            ans += x%10;
            x /= 10;
        }

        cout<< ans<< '\n';
    }

    return 0;
}