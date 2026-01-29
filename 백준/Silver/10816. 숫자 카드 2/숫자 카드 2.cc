#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    map<int, int> m;
    
    int n = 0;
    cin >> n;
    vector<int> v(n, 0);

    for (int i = 0; i < n; i++) {
        int tmp = 0;
        cin >> tmp;
        if (m.find(tmp) == m.end()) {
            m[tmp] = 1;
        } else {
            m[tmp] += 1;
        }
    }

    int k = 0;
    cin >> k;
    for (int i = 0; i < k; i++) {
        int tmp = 0;
        cin >> tmp;
        if (m.find(tmp) == m.end()) {
            cout << 0 << ' ';
            continue;
        }
        cout << m[tmp] << ' ';
    }

    return 0;
}
