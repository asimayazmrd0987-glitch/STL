#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {9, 1, 5, 3, 7, 2, 6, 4, 8};

    cout << "Original: ";
    for (int x : v) cout << x << ' ';
    cout << "\n";

    // sort ascending
    sort(v.begin(), v.end());
    cout << "Sorted asc: ";
    for (int x : v) cout << x << ' ';
    cout << "\n";

    // sort descending
    sort(v.begin(), v.end(), greater<int>());
    cout << "Sorted desc: ";
    for (int x : v) cout << x << ' ';
    cout << "\n";

    // find first greater than 5
    auto it = find_if(v.begin(), v.end(), [](int x) { return x < 5; });
    if (it != v.end()) {
        cout << "First element < 5: " << *it << "\n";
    } else {
        cout << "No element < 5\n";
    }

    // count occurrences
    v.push_back(3);
    v.push_back(3);
    cout << "Count of 3 = " << count(v.begin(), v.end(), 3) << "\n";
}

