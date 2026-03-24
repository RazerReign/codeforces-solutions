#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin>> t;

    for(int test = 0; test<t; test++) {
        int n,x;
        cin>> n>> x;

        vector<int> door(n);

        for(int i=0; i<n; i++) {
            cin>> door[i];
        }

        bool possible = true;

        if(x >= n) {
            cout<< "YES"<< '\n';
            continue;
        }

        bool button = false;

        int rem = 0;

        for(int i=0; i<n; i++) {
            if(rem > 0) {
                rem--;
                continue;
            }

            if(door[i] == 1) {
                if(button) {
                    possible = false;
                    break;
                }

                button = true;
                rem = x-1;
            }
        }

        cout<< (possible ? "YES" : "NO")<< '\n';
    }

    return 0;
}