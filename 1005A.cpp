#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin>> n;

    vector<int> alp(n);
    
    for(int i=0; i<n; i++) {
        cin>> alp[i];
    }

    vector<int> length;

    for(int i=0; i<n; i++) {
        if(i == n-1 || alp[i+1] == 1) {
            length.push_back(alp[i]);
        }
    }

    cout<< length.size() << '\n';

    for(int i=0; i<length.size(); i++) {
        cout<< length[i]<< (i==length.size() - 1 ? "" : " ");
    }

    cout<< '\n';

    return 0;
}