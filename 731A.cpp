#include <iostream>
#include <vector>
using namespace std;

int main() {
    string alp;
    cin>> alp;

    int answer =0;

    char prev = 'a';

    for(char c: alp) {
        int dist = abs(c - prev);
        answer += min(dist, 26 - dist);
        prev = c;
    }

    cout<< answer<< '\n';

    return 0;
}