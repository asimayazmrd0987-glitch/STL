#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<vector<int>> brr(4, vector<int>(4, 2));

    brr[0] = vector<int>(4);
    brr[1] = vector<int>(3);
    brr[2] = vector<int>(5);
    brr[3]  = vector<int>(2);

    int totalRows = brr.size();

    for (int i = 0; i < totalRows; i++)
    {
        for (int j = 0; j < brr[i].size(); j++)
        {
            cout << brr[i][j] << " ";
        }
            cout << endl;
    }
    return 0;
}