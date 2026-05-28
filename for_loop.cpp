#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> first;
    vector<int> second;

    first.push_back(10);
    first.push_back(20);
    first.push_back(30);
    first.push_back(40);
    first.push_back(50);

    second.push_back(192);
    second.push_back(193);
    second.push_back(194);
    second.push_back(195);
    second.push_back(196);

    first.swap(second);
    cout << first[0] << " " << first[1] << " " << first[2] << " " << first[3] << " " << first[4] << endl;

    for(int i: first){
        cout<<i<<" ";
    }
    for(int i: second){
        cout<<i<<" ";
    }
}