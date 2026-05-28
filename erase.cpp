#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> gpa;

    gpa.push_back(10);
    gpa.push_back(20);
    gpa.push_back(30);
    gpa.push_back(40);
    gpa.push_back(50);

    cout<<"Size :"<<gpa.size()<<endl;

    gpa.erase(gpa.begin(), gpa.end());
    cout<<"After ERASE :"<<gpa.size()<<endl;
}