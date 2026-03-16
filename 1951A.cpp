#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>> t;

    while(t--) {
        int n;
        string k;
        cin>> n>> k;

        int cnt = 0;

        for(char c : k) if(c == '1') cnt++;

            if(cnt%2 == 1) {
                cout<< "NO"<< '\n';
                continue;
            }

            if(cnt != 2) {
                cout<< "YES"<< '\n';
                continue;
            }

            bool adj = false;
            for(int i=0; i<n-1; i++) {
                if(k[i] == '1' && k[i+1] == '1') {
                adj = true;
                break;
                }
            }

            cout<<(adj ? "NO" : "YES")<< '\n';
        }

    return 0;
}