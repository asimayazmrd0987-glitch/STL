#include <iostream>
#include <stack>
#include <queue>
using namespace std;

void showStack(stack<int> s) {
    cout << "Stack top -> bottom: ";
    while (!s.empty()) {
        cout << s.top() << ' ';
        s.pop();
    }
    cout << "\n";
}

int main() {
    stack<int> st;
    for (int i = 1; i <= 5; i++) st.push(i * 10);

    cout << "After pushing 10,20,30,40,50\n";
    cout << "top=" << st.top() << " size=" << st.size() << "\n";
    showStack(st);

    st.pop();
    cout << "After pop() -> top=" << st.top() << " size=" << st.size() << "\n\n";

    queue<string> q;
    q.push("Alice");
    q.push("Bob");
    q.push("Charlie");

    cout << "Queue front=" << q.front() << " back=" << q.back() << " size=" << q.size() << "\n";

    cout << "Dequeuing: ";
    while (!q.empty()) {
        cout << q.front() << ' ';
        q.pop();
    }
    cout << "\n";
}

