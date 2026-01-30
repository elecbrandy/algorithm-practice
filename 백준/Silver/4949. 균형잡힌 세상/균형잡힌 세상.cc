#include <iostream>
#include <iterator>
#include <string>
#include <algorithm>
#include <stack>

using namespace std;

bool ifBalance(string &input) {
    stack<char> s;
    string tmp = "()[]";

    for (int i = 0; i < input.size(); i++) {

        if (tmp.find(input[i]) == string::npos) {
            continue;
        }

        // 여는 괄호: 스택에 넣기
        if (input[i] == '(' || input[i] == '[') {
            s.push(input[i]);
            continue;
        }

        // 닫는 괄호: 스택에서 꺼내기
        // 1. ')' 의 경우
        if (input[i] == ')') {
            if (s.size() == 0)
                return false;
            if (s.top() == '(') {
                s.pop();
            } else {
                return false;
            }
            
        }

        // 2. ']' 의 경우
        else if (input[i] == ']') {
            if (s.size() == 0)
                return false;
            if (s.top() == '[') {
                s.pop();
            } else {
                return false;
            }
        }
    }
    return (s.size() == 0) ? true : false;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    while (1) {
        string input;
        getline(cin, input);
        if (input == ".")
            return 0;
        cout << (ifBalance(input) ? "yes\n" : "no\n");
    }

    return 0;
}
