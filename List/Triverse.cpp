#include<iostream>
#include<list>
#include<vector>
using namespace std;

int main(){
    list<int> List; 
   List.push_back(10);
   List.push_back(20);
   List.push_back(30);
   List.push_back(40);

   List.push_front(50);
   List.push_front(60);

   list<int>::iterator it = List.begin();

   while(it!= List.end()){
    cout<<*it<<" ";
    it++;
   }
}