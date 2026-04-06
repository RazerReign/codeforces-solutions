#include <iostream>
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

        int left = 0;
        while(left + 1 < n && alp[left+1] == 1) {
            left++;
        }

        int right = n-1;
        while(right - 1 >= 0 && alp[right-1] == 1) {
            right--;
        }

        if(left >= right) {
            cout<< 0<< '\n';
        }

        else {
            cout<< (right-left)<< '\n';
        }

    }

    return 0;
}