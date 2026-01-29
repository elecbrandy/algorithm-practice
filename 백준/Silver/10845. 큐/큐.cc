#include <iostream>
#include <vector>
#include <algorithm>
#include <list>

using namespace std;

/*
push X: 정수 X를 큐에 넣는 연산이다.
pop: 큐에서 가장 앞에 있는 정수를 빼고, 그 수를 출력한다. 만약 큐에 들어있는 정수가 없는 경우에는 -1을 출력한다.
size: 큐에 들어있는 정수의 개수를 출력한다.
empty: 큐가 비어있으면 1, 아니면 0을 출력한다.
front: 큐의 가장 앞에 있는 정수를 출력한다. 만약 큐에 들어있는 정수가 없는 경우에는 -1을 출력한다.
back: 큐의 가장 뒤에 있는 정수를 출력한다. 만약 큐에 들어있는 정수가 없는 경우에는 -1을 출력한다.
*/

class myQueue {
public:
    list<int> _l;
    myQueue() {};

    void push(int num) {
        _l.push_back(num);
    }

    int pop() {
        if (_l.size() == 0) {
            return -1;
        } 
        int result = _l.front();
        _l.pop_front();
        return result;
    }


    int size() {
        return _l.size();
    }

    int empty() {
        return _l.size() == 0 ? 1 : 0;
    }

    int front() {
        if (_l.size() == 0) {
            return -1;
        }
        return _l.front();
    }

    int back() {
        if (_l.size() == 0) {
            return -1;
        }
        return _l.back();
    }
};


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    myQueue q = myQueue();
    
    int n = 0;

    cin >> n;
    // cin.ignore();
    for (int i = 0; i < n; i++) {
        string m;
        cin >> m;
        if (m == "pop") {
            cout << q.pop() << '\n';
        } else if (m == "size") {
            cout << q.size() << '\n';
        } else if (m == "empty") {
            cout << q.empty() << '\n';
        } else if (m == "front") {
            cout << q.front() << '\n';
        } else if (m == "back") {
            cout << q.back() << '\n';
        } else {
            int number = 0;
            cin >> number;
            q.push(number);
        }
    }

    return 0;
}
