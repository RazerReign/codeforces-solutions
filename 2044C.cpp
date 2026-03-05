#include <iostream>
using namespace std;

int main() {
    int t;
    cin>> t;

    while(t--) {
        int m,a,b,c;
        cin>> m>> a>> b>> c;

        int row1 = min(a,m);
        int row2 = min(b,m);
        int remainder = 2*m - row1 - row2;
        int answer = row1 + row2 + min(c,remainder);

        cout<< answer << '\n';
    }

    return 0;
}