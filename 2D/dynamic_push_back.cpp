#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<vector<int>> matrix;

    matrix.push_back({10, 20, 30});
    matrix.push_back({40, 50});
    matrix.push_back({60, 70, 80, 90});

    for (const auto &row : matrix)
    {
        for (int val : row)
        {
            cout << val << " ";
        }
        cout << endl;
    }
    return 0;
}