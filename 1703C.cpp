#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    

    int t;
    cin>> t;

    while(t--) {
        int n;
        cin>> n;

        vector<int> a(n);

        for(int i=0; i<n; i++) {
            cin>> a[i];
        }

        for(int i=0; i<n; i++) {
            int lt;
            string s;

            cin>> lt>> s;

            for(char move : s) {
                if(move == 'U') {
                    a[i] = (a[i] + 9) % 10;
                }

                else if(move == 'D') {
                    a[i] = (a[i] + 1) % 10;
                }
            }
        }

        for(int i=0; i<n; i++) {
            cout<< a[i]<< " ";
        }

        cout<< "\n";
    }

    return 0;
}