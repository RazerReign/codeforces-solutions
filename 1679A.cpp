#include <iostream>
using namespace std;

int main() {
    int t;
    cin>> t;

    while(t--) {
        long long n;
        cin>> n;

        if(n<4 || n == 5 || n%2 == 1) {
            cout<< -1<< '\n';
            continue;
        }

        long long mn, mx;

        mx = n/4;

        if(n%6 == 0) mn = n/6;

        else mn = n / 6 + 1;

        cout<< mn<< " "<< mx<< '\n';
    }

    return 0;
}