#include <bits/stdc++.h>
using namespace std;
// List is also a dynamic container
int main()
{
    list<int> l;

    l.push_back(2);
    l.emplace_back(4);

    l.push_front(5);

    l.emplace_front(); // if nothing added takes 0

    for (auto it : l)
    {
        cout << it << " "; // Prints 0 5 2 4
    }
    // rest functions are same as vector
    // being, end, rbegin, rend, clear, insert, size, swap
}