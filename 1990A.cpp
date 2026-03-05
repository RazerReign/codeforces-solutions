#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin>> t;

    while(t--) {
        int n;
        cin>> n;
        vector<int> arr(n);

        for(int i=0; i<n; i++) {
            cin>> arr[i];
        }

        if(n%2 == 1) {
            cout<< "Yes"<< '\n';
            continue;
        }

        sort(arr.begin(), arr.end());

        bool yea = false;
        for(int i=1; i<n; i += 2) {
            if(arr[i-1] != arr[i]) {
                yea = true;
                break;
            }
        }

        cout<< (yea ? "Yes": "No")<< '\n';
    }

    return 0;
}