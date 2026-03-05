#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int k,n,w;
    cin>> k>> n>> w;

    int total = 0;
    for(int i=1; i<=w; i++) {
        total = total + k*i;
    }

    int friendd = total - n;

    if(w == 1) {
        friendd = 0;
    }
    else if(friendd < 0) {
        friendd = 0;
    }

    cout<< friendd;

    return 0;
}