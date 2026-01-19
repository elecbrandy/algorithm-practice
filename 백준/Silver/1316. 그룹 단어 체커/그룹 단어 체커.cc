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

    int N = 0;
    int result = 0;
    cin >> N;

    for (int i = 0; i < N; i++) {
        string input;
        cin >> input;
        int end = input.length();
        array<int, 30> alphabet = {0};
        bool log = true;
        
        if (end == 0) {
            result++;
            break;
        }

        for (int j = 0; j < end; j++) {

            // 처음 나온 알파벳인 경우 -> 문제없음
            if (alphabet[input[j] - 'a'] == 0) {
                alphabet[input[j] - 'a']++;
                continue;
            }

            // 이미 나온 알파벳인 경우
            if (alphabet[input[j] - 'a'] != 0) {
                // 직전문자와 같아야함.
                if (j != 0 && input[j-1] == input[j]) {
                    alphabet[input[j] - 'a']++;
                    continue;
                } else {
                    log = false;
                    break;
                }
                alphabet[input[j] - 'a']++;
                continue;
            }
        }
        if (log == true)
            result++;
    }

    cout << result;
    return 0;
}
