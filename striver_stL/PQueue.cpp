#include <bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue<int> pq; // Data is not stored in a linear fashion
    pq.push(5);             //{5}
    pq.push(2);             //{5, 2}
    pq.push(8);             //{8, 5, 2}
    pq.emplace(10);         //{10, 8, 5, 2}

    cout << pq.top(); // Prints 10
    pq.pop();         //{8, 5, 2}

    // size swap empty functions same as others

    // push & pop: O(log n)
    // top: O(1)
    return 0;
}