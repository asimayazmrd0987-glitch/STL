#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    vector<vector<string>> words = {
        {"apple", "banana", "cherry"},
        {"dog", "elephant", "fox"}};

    for (int i = 0; i < words.size(); ++i)
    {
        cout << "Row " << i << ": ";
        for (int j = 0; j < words[i].size(); ++j)
        {
            cout << words[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}