#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin>> n;

    vector<int> a(n);

    for(int i = 0; i<n; i++) {
        cin>> a[i];
    }

    int mn = a[0];
    int mx = a[0];

    int answer = 0;

    for(int i = 1; i<n; i++) {
        if(a[i] > mx) {
            mx = a[i];
            answer++;
        }

        else if(a[i] < mn) {
            mn = a[i];
            answer++;
        }
    }

    cout<< answer<< '\n';
    return 0;
}