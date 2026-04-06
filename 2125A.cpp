#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long t;
    cin>> t;

    while(t--) {
        string k;
        cin>> k;

        sort(k.rbegin(), k.rend());

        cout<< k<< '\n';
    }

    return 0;
}