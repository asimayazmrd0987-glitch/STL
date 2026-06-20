#include <iostream>
#include <map>
#include <unordered_map>
#include <string>
using namespace std;

int main() {
    // map: ordered by key
    map<string, int> mp;
    mp["apple"] = 3;
    mp["banana"] = 5;
    mp["cherry"] = 2;

    cout << "map (ordered):\n";
    for (auto &p : mp) {
        cout << p.first << " -> " << p.second << "\n";
    }

    mp["banana"] += 2;
    cout << "banana updated -> " << mp["banana"] << "\n\n";

    // unordered_map: not ordered
    unordered_map<string, int> ump;
    ump["red"] = 10;
    ump["green"] = 20;
    ump["blue"] = 30;

    cout << "unordered_map (not ordered):\n";
    for (auto &p : ump) {
        cout << p.first << " -> " << p.second << "\n";
    }

    if (ump.find("yellow") == ump.end()) {
        cout << "yellow not found in unordered_map\n";
    }
}

