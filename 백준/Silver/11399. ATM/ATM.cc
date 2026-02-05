#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n = 0;
    cin >> n;
    vector<int> line(n);

    for (int i = 0; i < n; i++) {
        cin >> line[i];
    }
    sort(line.begin(), line.end());
    
    int sum = 0;
    int result = 0;
    for (int i = 0; i < n; i++) {
        sum += line[i];
        result += sum;
    }
    cout << result;
    return 0;
}
