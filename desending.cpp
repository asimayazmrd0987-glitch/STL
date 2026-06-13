#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> des = {1, 2, 3, 4, 5};

    sort(des.rbegin(), des.rend());
    for(int i: des){
        cout << i << " ";
    }
}

