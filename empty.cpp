#include<iostream>
#include<vector>
using namespace std;

int main(){
    static vector<int> marks;
//push_back adds and element to the end of the vector

    marks.push_back(10);
    marks.push_back(20);
    marks.push_back(30);
    marks.push_back(40);

    cout<<"Size of marks: "<<marks.size()<<endl;
    if (marks.empty()==true){
        cout<<"Vector is empty bhaya"<<endl;
    }
    else{
        cout<<"Vector is not empty, if you think "<<endl;
    }
    return 0;
}