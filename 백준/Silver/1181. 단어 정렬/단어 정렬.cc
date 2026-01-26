#include <iostream>
#include <set>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    set<pair<int, string>> m;
    int     n;
    
    cin >> n;

    for (int i = 0; i < n; i++) {
        string tmp;
        cin >> tmp;
        m.insert(pair(tmp.length(), tmp));
    }

    for (const auto &p :m) {
        cout << p.second << '\n';
    }

    return 0;
}