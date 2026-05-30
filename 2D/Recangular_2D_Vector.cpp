#include <iostream>
#include <vector>
using namespace std;

int main() {

    int rows = 3, cols = 4;
    vector<vector<int>> grid(rows, vector<int>(cols, 0));

    grid[0][2] = 5;
    grid[2][3] = 9;

    for (int i = 0; i < grid.size(); ++i) {
        for (int j = 0; j < grid[i].size(); ++j) {
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}