#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>> t;

    while(t--) {
        int n;
        string k;
        cin>> n>> k;

        bool found = false;

        for(int i=0; i<n; i++) {
            int ca = 0, cb = 0;

            for(int j=i; j<n; j++) {
                if(k[j] == 'a') ca++;
                else cb++;

                if(ca == cb) {
                    cout<< i+1<< " " << j+1<< '\n';

                    found = true;
                    break;
                }
            }

            if(found) break;
        }

        if(!found) cout<< "-1 -1\n";
    }

    return 0;
}