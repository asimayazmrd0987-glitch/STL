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

    vector<int>::iterator it = first.begin();
    while(it !=first.end()){
        cout<<*it<<" "<<endl;
        it++;
    }
    vector<int>::iterator pi= second.begin();
    while(pi !=second.end()){
        cout<<*pi<<" "<<endl;
        pi++;
    }


}