#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string dial[] = {"ABC", "DEF", "GHI", "JKL", "MNO", "PQRS", "TUV", "WXYZ"};

    string input;
    cin >> input;
    int sum = 0;

    // 입력받은 문자 c가 어디에 속하는지 체크
    for (int j = 0; j < input.length(); j++) {
        char c = input[j];

        // c 어디있는지
        for (int i = 0; i <= 8; i++) {
            if (dial[i].find(input[j]) != string::npos) {
                sum += (i + 3);
                break;
            }
        }   
    }

    cout << sum;
    return 0;
}