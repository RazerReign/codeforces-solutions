#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
using namespace std;

int main() {
    int t;
    cin>> t;

    while(t--) {
        int n;
        cin>> n;

        vector<int> alp(n);

        for(int i=0; i<n; i++) {
            cin>> alp[i];
        }

        map<int, int> freq;

        for(int x:alp) {
            freq[x]++;
        }

        int score = 0;

        for(auto& p : freq) {
            score += p.second / 2;
        }

        cout<< score<< '\n';
    }

    return 0;
}