#include <iostream>
#include <string>
#include <map>
#include <algorithm>

using namespace std;

class Monster {
public:
    int _number;
    string _name;
    string _low;

    Monster(int num, string name, string low) {
        this->_number = num;
        this->_name = name;
        this->_low = low;
    };

    Monster() {};
};


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n, m = 0;
    cin >> n >> m;

    map<string, Monster> m_book;
    vector<string> v_book(n);

    for (int i = 0; i < n; i++) {
        string input;
        cin >> input;
        
        string name = input;
        for (auto &t : input) {
            t = tolower(t);
        }
        string low_name = input;

        m_book[low_name] = Monster(i, name, low_name);
        v_book[i] = name;
    }

    for (int i = 0; i < m; i++) {
        string input;
        cin >> input;
        
        if (isdigit(input[0])) { // 숫자인경우 -> 이름반환
            int num = stoi(input);
            cout << v_book[num - 1] << '\n';
        }
        else { // 문자인경우 -> 번호반환
            for (auto &j : input) {
                j = tolower(j);
            }
            cout << m_book[input]._number + 1 << '\n';
        }
    }
    return 0;
}
