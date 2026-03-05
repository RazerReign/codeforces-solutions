#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin>> n;

    string k;
    cin>> k;

    vector<int> count(26,0);
    for(char c:k) {
        count[c-'a']++;
    }

    bool possible = (n==1);
    
    for(int freq : count) {
        if (freq>=2) {
            possible = true;
            
            break;
        }

    }

    cout<< (possible ? "Yes" : "No")<< '\n';

    return 0;
}