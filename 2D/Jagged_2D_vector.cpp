#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<vector<int>> jagged(3);
    jagged[0] = vector<int>(4, 1);   // row 0:  4 ones
    jagged[1] = vector<int>(2, 2);  // row 1 : 2  twos
    jagged[2] = vector<int>(5, 3);    // row 2: 5 threes

    for (int i = 0; i < jagged.size(); ++i) {
        cout << "Row " << i << " (size " << jagged[i].size() << "): ";
        for (int j = 0; j < jagged[i].size(); ++j) {
            cout << jagged[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}