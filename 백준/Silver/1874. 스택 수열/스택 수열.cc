#include <iostream>
#include <iterator>
#include <string>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>

using namespace std;

/*
    오름차순으로 넣는다는거 -> 1, 2, 3, 4, 5 ... 작은것부터 넣는다.
    ex) 1, 2, 3, 4, 5, 6, 7, 8
    수열) 4 3 6 8 7 5 2 1

    no
    먼저 넣은게
*/

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n = 0;
    cin >> n;

    vector<int> v(n);
    string result;
    queue<int> q;
    stack<int> s;

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int j = 0;
    int cur_num = 1;
    for (int i = 0; i < n; i++) {
        // 1. v[i] 이 나올때까지 stack에 push
        while (cur_num <= v[i]) {
            s.push(cur_num);
            cur_num++;
            result += "+\n";
        }

        // 2. v[i] == stack 탑 인경우
        if (!s.empty() && s.top() == v[i]) {
            s.pop();
            result += "-\n";
        } else {
            cout << "NO\n";
            return 0;
        }
    }
    cout << result;

    return 0;
}

