#include <iostream>
#include <set>
#include <map>
using namespace std;

int main() {
    multiset<int> ms = {5, 1, 5, 2, 2, 9};

    cout << "multiset contents (sorted): ";
    for (int x : ms) cout << x << ' ';
    cout << "\n";

    cout << "Count of 5 = " << ms.count(5) << "\n";
    cout << "Count of 2 = " << ms.count(2) << "\n\n";

    // erase all occurrences of a key
    ms.erase(5);
    cout << "After ms.erase(5): ";
    for (int x : ms) cout << x << ' ';
    cout << "\n\n";

    // erase a single iterator occurrence
    auto it = ms.find(2);
    if (it != ms.end()) ms.erase(it);

    cout << "After erasing one occurrence of 2: ";
    for (int x : ms) cout << x << ' ';
    cout << "\n\n";
}

