#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> marks;
//push_back adds and element to the end of the vector

    marks.push_back(10);
    marks.push_back(20);
    marks.push_back(30);
    marks.push_back(40);

    cout<<"Size of marks: "<<marks.size()<<endl;

    marks.pop_back();// remove 40, the last one
    cout<<"Size after pop: "<<marks.size()<<endl;

    marks.erase(marks.begin()+1);//removes 20
    cout<<"== Size after pop: "<<marks.size()<<endl;

}