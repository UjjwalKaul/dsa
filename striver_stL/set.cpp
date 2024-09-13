#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<int> st;   // Stores elements in sorted order and accepts only unique values(no duplicates)
    st.insert(1);  // {1}
    st.emplace(2); // {1, 2}
    st.insert(2);  // {1, 2}
    st.insert(4);  //{1, 2, 4}

    // begin() end() rbegin() rend() size()
    // empty() swap()

    auto it = st.find(4); // Iterator address
    auto it = st.find(6); // If an element is not in the set it will always return set.end()

    st.erase(4); // O(log n) to erase and take an element and O(1) to erase using an iterator address

    int cnt = st.count(2); // Returns 1 if 2 is present (i.e. unique elements) and 0 if 2 is not present in the set
    return 0;
}