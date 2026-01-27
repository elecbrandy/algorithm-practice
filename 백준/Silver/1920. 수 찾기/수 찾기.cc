#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int finder(vector<int> &v, int start, int end, int key) {
    if (start > end)
        return 0;

    int mid = (start + end) / 2;

    if (v[mid] == key) {
        return 1;
    } else if (v[mid] < key) {
        return finder(v, mid + 1, end, key); // 오른쪽으로
    } else {
        return finder(v, start, mid - 1, key); // 왼쪽으로
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    vector<int> v1;
    vector<int> v2;    
    
    int n = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int input;
        cin >> input;
        v1.push_back(input);
    }

    sort(v1.begin(), v1.end());

    int m = 0;
    cin >> m;
    for (int i = 0; i < m; i++) {
        int input;
        cin >> input;
        v2.push_back(input);
    }

    for (int i = 0; i < m; i++) {
        cout << finder(v1, 0, v1.size() - 1, v2[i]) << "\n";
    }

    return 0;
}