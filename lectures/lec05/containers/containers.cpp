#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <stack>
#include <queue>

int main() {
    // Sequence Containers
    std::vector<int> vec = {1, 2, 3};
    vec.push_back(4);
    std::list<int> lst = {1, 2, 3};
    lst.push_back(4);
    std::deque<int> dq = {1, 2, 3};
    dq.push_back(4);

    // Associative Containers
    std::set<int> s = {3, 1, 2};
    s.insert(4);
    std::map<int, std::string> m;
    m[1] = "one";

    std::multiset<int> ms = {3, 1, 2, 2};
    std::multimap<int, std::string> mm;
    mm.insert({1, "one"});

    // Unordered Associative Containers
    std::unordered_set<int> us = {3, 1, 2};
    us.insert(4);
    std::unordered_map<int, std::string> um;
    um[1] = "one";

    std::unordered_multiset<int> ums = {3, 1, 2, 2};
    std::unordered_multimap<int, std::string> umm;
    umm.insert({1, "one"});

    // Container Adapters
    std::stack<int> st;
    st.push(1);
    std::queue<int> q;
    q.push(1);
    std::priority_queue<int> pq;
    pq.push(1);

    return 0;
}

