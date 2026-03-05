#include <iostream>
using namespace std;

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    
    int t;
    cin>> t;

    while(t--) {
        int n;
        long long m;
        cin>> n>> m;

        long long answer = 0;
        long long time = 0;
        int side = 0;

        for(int i=0; i<n; i++) {
            long long a;
            int b;
            cin>> a>> b;

            long long diff = a - time;
            int odd = (side != b);

            if((diff%2) != odd) {
                answer += diff - 1;
            }

            else {
                answer += diff;
            }

            time = a;
            side = b;
        }

        answer += m-time;
        cout<< answer<< '\n';
    }

    return 0;
}