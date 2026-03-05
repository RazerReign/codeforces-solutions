#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int t;
    cin>> t;

    while(t--) {
        int k;
        string l;

        cin>> k>> l;

        int cnt = 0, three_consecutive = 0;

        for(int i=0; i<k; i++) {
                if(l[i] == '.') cnt++;
        }

        for(int i=0; i<k; i++) {
            if(l[i-1] == '.' && l[i] == '.' && l[i+1] == '.') {
                three_consecutive = 1;
            }
        }
        
        if(three_consecutive) {
            cout<< 2<< '\n';
        }

        else {
            cout<< cnt<< '\n';
        }
    }


    return 0;
}