#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {10, 20, 30, 40, 50};

    cout << "Range-based for: ";
    for (int x : v) cout << x << ' ';
    cout << "\n";

    cout << "Explicit iterators forward: ";
    for (auto it = v.begin(); it != v.end(); ++it) cout << *it << ' ';
    cout << "\n";

    cout << "Using iterator arithmetic: ";
    auto it = v.begin();
    cout << "v[0]=" << *it << ", v[3]=" << *(it + 3) << "\n\n";

    // Reverse iteration
    cout << "Reverse iteration: ";
    for (auto rit = v.rbegin(); rit != v.rend(); ++rit) cout << *rit << ' ';
    cout << "\n";

    // Modify via iterator
    for (auto it2 = v.begin(); it2 != v.end(); ++it2) {
        if (*it2 % 20 == 0) *it2 += 5;
    }

    cout << "After modification: ";
    for (int x : v) cout << x << ' ';
    cout << "\n";
}

