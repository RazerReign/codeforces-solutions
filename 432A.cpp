#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,k;
    cin>> n>> k;

    vector<int> part(n);
    for(int i=0; i<n; i++) {
        cin>> part[i];
    }

    int count = 0;

    for(int i=0; i<n; i++) {
    if(5-part[i] >= k)
        count++;
    }

    cout<< count/3<< '\n';

    return 0;
}