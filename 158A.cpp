#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n,k;
    cin>> n>> k;

    vector<int> mark(n);

    for(int i=0; i<n; i++) {
        cin>> mark[i];
    }

    int count = 0;
    
    for(int j=0; j<n; j++) {
        if(mark[j] >= mark[k-1] && mark[j] > 0) {
            count++;
        }
    }

    cout<< count;

    return 0;
}