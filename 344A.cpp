#include <iostream>
#include <vector>
using namespace std;

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int n;
    cin>> n;
    
    int k[100000];

    int groups = 0;

    for(int i=0; i<n; i++) {
        cin>> k[i];
    }

    for(int i=0; i<n; i++) {
            if(k[i] != k[i+1]) {
                groups++;
                }
        }

    cout<< groups;

    return 0;
}