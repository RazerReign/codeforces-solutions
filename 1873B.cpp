#include <iostream>
using namespace std;

int main() {
    int t;
    cin>> t;

    while(t--) {
        int n;
        cin>> n;

        long long arr[100];
        for(int i=0; i<n; i++) {
            cin>> arr[i];
        }

        int zero = 0;
        long long min = __LONG_LONG_MAX__;
        long long product = 1;

        for(int i=0; i<n; i++) {
            if(arr[i] == 0) {
                zero++;
            }

            else {
                product *= arr[i];
                if(arr[i] < min) {
                    min = arr[i];
                }
            }
        }

        long long final;
        if(zero >= 2) {
            final = 0;
        }

        else if(zero == 1) {
            final = product;
        }

        else {
            final = product/min * (min+1);
        }

        cout<< final<< '\n';
    }
    return 0;
}