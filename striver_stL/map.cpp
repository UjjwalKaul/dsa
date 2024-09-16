#include <bits/stdc++.h>
using namespace std;

void multiMap()
{
    // everything same as map only it can store duplicate keys
    // only map[key] access cannot be used here
}

void unorderedMap()
{
    // Unique keys in unsorted order
}
int main()
{
    map<int, int> mp; // Stores everything in key-value pairs of any data type
    // Map stores unique keys in sorted order

    mp[1] = 2;         // Adds key 1 with value 2
    mp.emplace(2, 2);  // Adds key 2 with value 2
    mp.insert({3, 4}); // Correct way to insert key 3 with value 4

    for (auto it : mp)
    {
        cout << it.first << " " << it.second << endl; // Print the value of each key
    }
    auto it = mp.find(1);
    cout << &it->second;

    return 0;
}
