#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;

    cout << "Initially\n";
    cout << "size=" << v.size() << " capacity=" << v.capacity() << " empty=" << boolalpha << v.empty() << "\n\n";

    // Demonstrate reserve / capacity growth behavior
    v.reserve(10);
    cout << "After reserve(10)\n";
    cout << "size=" << v.size() << " capacity=" << v.capacity() << "\n\n";

    for (int i = 1; i <= 12; i++) {
        v.push_back(i * 10);
        cout << "push_back(" << i * 10 << ") -> size=" << v.size() << " capacity=" << v.capacity() << "\n";
    }

    cout << "\nNow shrink_to_fit()...\n";
    v.shrink_to_fit();
    cout << "size=" << v.size() << " capacity=" << v.capacity() << "\n\n";

    // Demonstrate resize changes size
    cout << "Resize examples\n";
    v.resize(5);
    cout << "After resize(5): size=" << v.size() << " capacity=" << v.capacity() << "\nValues: ";
    for (int x : v) cout << x << ' ';
    cout << "\n";

    v.resize(8, -1);
    cout << "After resize(8,-1): size=" << v.size() << " capacity=" << v.capacity() << "\nValues: ";
    for (int x : v) cout << x << ' ';
    cout << "\n";
}

