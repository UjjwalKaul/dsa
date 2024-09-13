#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<int> q; // First-In-First-Out
    q.push(1);    // {1}
    q.push(2);    // {1, 2}
    q.emplace(4); // {1, 2, 4}
    q.back() += 5;
    cout << q.back();  // Prints 9
    cout << q.front(); // Prints 1
    q.pop();           // {2, 9}
    cout << q.front();
    // size swap empty same as stack
    return 0;
}