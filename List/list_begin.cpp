#include<iostream>
#include<list>
#include<vector>
using namespace std;
int main()
{
    list<int> l;
    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    l.push_back(4);
    l.push_back(5);

    l.push_front(10);
    l.push_front(20);

    cout<<l.size()<<endl;
    
    for(auto ti; ti<l.size(); ti++){
        cout<<;
    }

    return 0;
}