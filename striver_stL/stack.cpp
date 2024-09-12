#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> st; // Last-In-First-Out
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(3);
    st.emplace(5);

    cout << st.top(); // Prints 5 which is on top of stack
    // Stack does not allow indexing to access data
    st.pop();
    cout << st.top();   // Prints 3
    cout << st.empty(); // Prints 0 as false

    stack<int> st1;
    st.swap(st1);
    // All operations are O(1)
    return 0;
}