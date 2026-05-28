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

    cout<<"Capacity :"<<gpa.capacity()<<endl;
    cout<<"Size :"<<gpa.size()<<endl;

    cout<<gpa.max_size()<<endl;
    
    gpa.clear();
    cout<<gpa.size()<<endl;
}