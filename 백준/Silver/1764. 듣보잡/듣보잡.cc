#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

bool search(vector<string> &v, int start, int end, string &key) {
    if (start > end)
        return false;
    
    int mid = (end + start) / 2;
    
    if (v[mid] == key) {
        // cout << "found key: " << key << " at mid: " << mid << "\n";
        return true;
    } else if (v[mid] < key) {
        return search(v, mid + 1, end, key);
    } else {
        return search(v, start, mid - 1, key);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n, m = 0;
    cin >> n >> m;

    vector<string> input(n);
    vector<string> result;

    // 듣도 못한
    for (int i = 0; i < n; i++) {
        cin >> input[i];
    }
    
    sort(input.begin(), input.end());

    // 보도 못한
    for (int i = 0; i < m; i++) {
        string key;
        cin >> key;

        if (search(input, 0, input.size() - 1, key) == true) {
            result.push_back(key);
        }
    }

    sort(result.begin(), result.end());
    cout << result.size() << '\n';
    for (const auto& v: result) {
        cout << v << '\n';
    }

    return 0;
}