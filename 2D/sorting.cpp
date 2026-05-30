#include <iostream>
#include <vector>
#include <algorithm>   
using namespace std;

int main() {
    vector<vector<int>> matrix = {
        {3, 1, 2},
        {7, 5, 6, 4},
        {9, 8}
    };

    for (vector<int>& row : matrix) {
        sort(row.begin(), row.end());
    }

    for (const auto& row : matrix) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }
    return 0;
}