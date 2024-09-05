#include <bits/stdc++.h>
using namespace std;
// Vector is a container which is dynamic in nature i.e. size can be altered
int main()
{
    vector<int> v; // Creates an empty container

    v.push_back(1);    // push_back adds a copy of the element to the end of the vector
    v.emplace_back(2); // emplace_back constructs the element directly at the end, potentially avoiding an extra copy or move operation.

    // Vector of pairs
    vector<pair<int, int>> p;
    p.push_back({1, 2});
    p.emplace_back(1, 2);

    vector<int> a(5, 10); // = {10, 10, 10, 10, 10 }
    cout << a[1] << " " << a.at(0) << endl;
    // for (auto it : a)
    // {
    //     cout << it << " ";
    // }
    for (auto it = a.begin(); it != a.end(); it++) // auto handles that data type on it's own
    {
        cout << *(it) << " ";
    }

    v.erase(v.begin() + 1); // Can select one or multiple values (start,end) start is included end is not included

    v.insert(v.begin(), 300);       // insert(address,value)
    v.insert(v.begin() + 1, 2, 10); // insert(address,howManyTimes,whatValue) here inserts two 10s in the vector

    cout << "\n"
         << a.size() << endl; // Returns size of vector

    a.clear(); // Clears the vector

    cout << a.empty(); // Returns 0 or 1 depending on whether vector is empty or not
    return 0;
}