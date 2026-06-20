#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "hello";
    cout << "s=" << s << "\n";

    // concatenation
    string t = "world";
    string u = s + " " + t;
    cout << "u=" << u << "\n\n";

    // length
    cout << "Length of u = " << u.length() << "\n";

    // access
    cout << "u[0]=" << u[0] << " u[last]=" << u[u.size() - 1] << "\n";

    // find
    size_t pos = u.find("world");
    if (pos != string::npos) {
        cout << "'world' found at index " << pos << "\n";
    }

    // replace
    u.replace(pos, 5, "C++");
    cout << "After replace: " << u << "\n\n";

    // substr
    cout << "Substring (0,5): " << u.substr(0, 5) << "\n";
}

