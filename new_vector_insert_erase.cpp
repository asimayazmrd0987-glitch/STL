#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {1, 2, 4, 5};

    cout << "Initial: ";
    for (int x : v) cout << x << ' ';
    cout << "\n";

    // Insert
    v.insert(v.begin() + 2, 3); // insert at index 2
    cout << "After insert 3 at index 2: ";
    for (int x : v) cout << x << ' ';
    cout << "\n";

    // Insert multiple values
    v.insert(v.begin() + 4, {7, 8});
    cout << "After insert {7,8} at index 4: ";
    for (int x : v) cout << x << ' ';
    cout << "\n";

    // Erase single element
    v.erase(v.begin() + 1); // remove index 1
    cout << "After erase index 1: ";
    for (int x : v) cout << x << ' ';
    cout << "\n";

    // Erase range [l, r)
    v.erase(v.begin() + 2, v.begin() + 4);
    cout << "After erase range indices [2,4): ";
    for (int x : v) cout << x << ' ';
    cout << "\n";

    return 0;
}

