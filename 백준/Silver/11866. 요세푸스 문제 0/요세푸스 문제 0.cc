#include <iostream>
#include <deque>
#include <algorithm>
#include <list>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n, m = 0;
    deque<int> d;

    cin >> n >> m;
    for (int i = 1; i < n + 1; i++) {
        d.push_back(i);
    }

    cout << '<';
    while (d.size() != 1) {
        for (int i = 0; i < m - 1; i++) {
            int tmp = d.front();
            d.pop_front();
            d.push_back(tmp);
        }
        cout << d.front() << ", ";
        d.pop_front();
    }
    cout << d.front() << '>';
    return 0;
}

// 1 2 3 4 5 6 7