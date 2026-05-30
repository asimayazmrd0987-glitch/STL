#include<iostream>
#include<list> //list is a sequence container in the C++ Standard Template Library (STL) that 
// implements a doubly-linked list, allowing for constant-time insertion and removal of elements from 
// any position within the sequence
using namespace std;

int main(){
    list<int> List;
    List.push_back(10);//  It stores elements in non-contiguous memory locations, with each element 
    // stored in a node containing pointers to both the previous and next nodes
    List.push_back(20);
    List.push_back(30);
    List.push_back(40);

    List.push_front(50);
    List.push_front(60);
    cout<<"Size is: "<<List.size()<<endl;

    for(auto t=List.begin(); t!=List.end(); t++){
        cout<<*t<<" ";
    }
    return 0;
}
// Advantages:--> It is ideal for applications requiring frequent insertions or deletions in the middle of
// the container, as it avoids the memory reallocation and element shifting required by contiguous 
//containers like vectors.