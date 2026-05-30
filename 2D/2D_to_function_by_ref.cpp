#include <iostream>
#include <vector>
using namespace std;

void printAndDouble(vector<vector<int>>& vec) {
    for (auto& row : vec) {
        for (int& val : row) {
            cout << val << " ";
            val *= 2;   // --> it  doubles each element
        }
        cout << endl;
    }
}

int main() {
    vector<vector<int>> data = {
        {1, 2, 3},
        {4, 5}
    };

    cout << "Original:\n";
    printAndDouble(data);  

    cout << "After doubling:\n";
    for (auto& row : data) {
        for (int v : row) cout << v << " ";
        cout << endl;
    }
    return 0;
}