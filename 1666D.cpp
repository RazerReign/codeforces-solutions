#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int t;
    cin>> t;

    for(int i=0; i<t; i++) {
        string k, target;
        cin>> k>> target;

        int count[26] = {0};
        for(int j=0; j<target.size(); j++) {
            count[target[j]-'A']++;
        }

        string answer = "";

        for(int j= k.size()-1; j>=0; j--) {
            int idx = k[j] - 'A';
            if(count[idx] > 0) {
                answer += k[j];
                count[idx]--;
            }
        }

        reverse(answer.begin(), answer.end());

        if(answer == target) {
            cout<< "Yes"<< '\n';
        }

        else {
            cout<< "No"<< '\n';
        }
    }

    return 0;
}