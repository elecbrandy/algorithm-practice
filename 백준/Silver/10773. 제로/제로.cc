#include <iostream>
#include <stack>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    stack<int> s;
    int     n;
    
    cin >> n;

    for (int i = 0; i < n; i++) {
        int a = 0;
        cin >> a;

        if (a == 0) {
            s.pop();
        } else {
            s.push(a);
        }

    }

    int sum = 0;
    while (!s.empty()) {
            sum += s.top();
            s.pop();

    }
    cout << sum;
    return 0;
}
