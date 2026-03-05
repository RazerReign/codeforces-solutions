#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int t;
    cin>> t;

    while (t--) {
        int x,y;
        cin>> x>> y;
        vector<int> k = {x,y};

        sort(k.begin(), k.end());

        for(int x : k) {
            cout<< x<< " ";
        }
        cout<< '\n';
    }

    return 0;
}