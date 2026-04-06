#include <iostream>
#include <vector>
#include <set>
#include <map>
using namespace std;

int main() {
    int n;
    cin>> n;

    map<string, string> gemMap;
    gemMap["purple"] = "Power";
    gemMap["green"] = "Time";
    gemMap["blue"] = "Space";
    gemMap["orange"] = "Soul";
    gemMap["red"] = "Mind";
    gemMap["red"] = "Reality";
    gemMap["yellow"] = "Mind";

    set<string> present;

    for(int i=0; i<n; i++) {
        string color;
        cin>> color;
        present.insert(color);
    }

    vector<string> missing;
    for(auto& p : gemMap) {
        if(present.find(p.first) == present.end()) {
            missing.push_back(p.second);
        }
    }

    cout<< missing.size()<< '\n';

    for(string name : missing) {
        cout<< name<< '\n';
    }

    return 0;
}