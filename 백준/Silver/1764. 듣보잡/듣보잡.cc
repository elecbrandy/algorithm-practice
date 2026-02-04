#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n, m = 0;
    cin >> n >> m;

    map<string, int> input;
    vector<string> result;

    // 듣도 못한
    for (int i = 0; i < n; i++) {
        string tmp;
        cin >> tmp;
        input[tmp] = 10;
    }

    // 보도 못한
    for (int i = 0; i < m; i++) {
        string tmp;
        cin >> tmp;

        if (input.end() != input.find(tmp)) {
            result.push_back(tmp);
        }
    }

    sort(result.begin(), result.end());
    cout << result.size() << '\n';
    for (const auto& v: result) {
        cout << v << '\n';
    }

    return 0;
}
