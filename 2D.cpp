#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<vector<int>> arr(4, vector<int>(4, 0));
    int totalRows = arr.size();
    int totalCols = arr[0].size();
    cout << totalRows << endl;
    cout << totalCols << endl;
}