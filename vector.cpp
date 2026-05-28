#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> marks(5, 2); 

    cout<<"First element :"<<(marks.front())<<endl;
    cout<<"Last element :"<<(marks.back())<<endl;
    
    cout<<" ==== OR ==== "<<endl;

    cout<<"First element :"<<*(marks.begin())<<endl;
    cout<<"Last element :"<<*(marks.end()-1)<<endl;

    cout<<"Size of marks:"<<marks.size()<<endl;
    
}     