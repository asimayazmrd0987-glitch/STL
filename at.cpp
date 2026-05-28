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

    cout<<gpa.at(2)<<endl;
    //   == OR ==
    cout<<gpa[1]<<endl;

    gpa.insert(gpa.begin(), 90);//  insert function
    cout<<*(gpa.begin())<<endl;
}