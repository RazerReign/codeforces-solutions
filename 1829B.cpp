#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>> t;

    while(t--) {
        int n;
        cin>> n;

        vector<int> k(n);

        for(int i=0; i<n; i++) {
            cin>> k[i];
        }


        int count1 = 0, count2 = 0;

        for(int i=0; i<n; i++) {
                    if(k[i] == 0) {
                        count1++;
                        count2 = max(count2, count1);
                        }
                    
                        else {
                            count1 = 0;
                        }
            }

        cout<< count2 << '\n';
    }

    return 0;
}