#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<vector<int>> matrix(3);  

    matrix[0].resize(4, 99);   
    matrix[1].resize(2);       
    matrix[2].resize(3, 7);    

    for (size_t i = 0; i < matrix.size(); ++i) {
        cout << "Row " << i << ": ";
        for (size_t j = 0; j < matrix[i].size(); ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}