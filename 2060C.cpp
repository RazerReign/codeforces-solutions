#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int t;
    cin>> t;

    for(int i=0; i< t; ++i) {
        int n,k;
        cin>> n>> k;

        vector<int> a(n);

        for(int i=0; i<n; ++i) {
            cin>> a[i];
        }

        sort(a.begin(), a.end());

        int left = 0;
        int right = n-1;
        int ans = 0;

        while(left < right) {
            if(a[left] + a[right] == k) {
                ans++;
                left++;
                right--;
            }

            else if(a[left] + a[right] <k) {
                left++;
            }

            else {
                right--;
            }
        }

        cout<< ans << '\n';
    }

    return 0;
}