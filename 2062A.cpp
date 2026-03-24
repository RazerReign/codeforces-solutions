#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t;
    cin>> t;

    while(t--) {
        string k;
        cin>> k;

        int count = 0;
        
        
        for(int i=0; i<k.size(); i++) {
            if(k[i] == '1') {
                
                count++;
            }
        }

        cout<< count<< '\n';
    }

    return 0;
}