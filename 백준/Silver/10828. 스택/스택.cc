#include <iostream>
#include <vector>
#include <algorithm>
#include <deque>

using namespace std;

class myStack {
public:
    deque<int> _q;
    myStack() {};

    void push(int num) {
        _q.push_front(num);
    }

    int pop() {
        if (_q.size() == 0) {
            return -1;
        }
        int result = _q.front();
        _q.pop_front();
        return result;
    }
    int size() {
        return _q.size();
    }

    int empty() {
        return _q.size() == 0 ? 1 : 0;
    }

    int top() {
        if (_q.size() == 0) {
            return -1;
        }
        return _q.front();
    }
};


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    myStack s = myStack();
    
    int n = 0;

    cin >> n;
    cin.ignore();
    for (int i = 0; i < n; i++) {
        string m;
        cin >> m;
        if (m == "pop") {
            cout << s.pop() << '\n';
        } else if (m == "size") {
            cout << s.size() << '\n';
        } else if (m == "top") {
            cout << s.top() << '\n';
        } else if (m == "empty") {
            cout << s.empty() << '\n';
        } else {
            int number = 0;
            cin >> number;
            s.push(number);
        }
    }

    return 0;
}
