#include <iostream>
#include <map>
using namespace std;

int main() {
    int t;
    cin>> t;

    while(t--) {
        int n;
        cin>> n;

        map<int, int> target = {{0,3}, {1,1}, {2,2}, {3,1}, {5,1}};

        map<int, int> current;

        int needed = 8;
        int step = 0;

        for(int i=0; i<n; i++) {
            int d;
            cin>> d;

            if(target.count(d) && current[d] < target[d]) {
                current[d]++;
                needed--;
            }

            if(needed == 0 && step == 0) {
                step = i+1;
            }
        }

        cout<< step<< "\n";
    }
    
    return 0;
}