#include <bits/stdc++.h>
using namespace std;
// Pairs lie in the utility library

int main()
{
    // Simple Pair
    pair<int, int> p = {1, 3};
    cout << p.first << " " << p.second << endl;

    // Nested Pair
    pair<int, pair<int, int>> x = {1, {3, 4}};
    cout << x.second.first << " " << x.second.second << endl;

    // Pair Array
    pair<int, int> arr[] = {{1, 2}, {2, 5}, {5, 1}};
    cout << arr[1].first << " " << arr[1].second << endl;
    return 0;
}