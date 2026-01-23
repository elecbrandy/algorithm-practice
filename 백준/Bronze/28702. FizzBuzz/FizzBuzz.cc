#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

/*     
$i$가 
$3$의 배수이면서 
$5$의 배수이면 “FizzBuzz”를 출력합니다.
 
$i$가 
$3$의 배수이지만 
$5$의 배수가 아니면 “Fizz”를 출력합니다.
 
$i$가 
$3$의 배수가 아니지만 
$5$의 배수이면 “Buzz”를 출력합니다.
 
$i$가 
$3$의 배수도 아니고 
$5$의 배수도 아닌 경우 
$i$를 그대로 출력합니다.
*/


// 1 ≤ N ≤ 10,000,000

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string fb = "FizBu";
    string s[3];
    cin >> s[0] >> s[1] >> s[2];

    int num_idx = 0;
    for (int i = 0; i < 3; i++) {
        // cout << s[i] << '\n';
        if (s[i].find_first_of(fb) == string::npos) {
            num_idx = i;
            break;
        } 
    }
    
    // cout << num_idx;

    int result = 0;
    if (num_idx == 0) {
        result = stoi(s[0]) + 3;
    } else if (num_idx == 1) {
        result = stoi(s[1]) + 2;
    } else {
        result = stoi(s[2]) + 1;
    }

    if (result % 3 == 0 && result % 5 == 0) {
        cout << "FizzBuzz";
    } else if (result % 3 == 0 && result % 5 != 0) {
        cout << "Fizz";
    } else if (result % 3 != 0 && result % 5 == 0) {
        cout << "Buzz";
    } else {
        cout << result;
    }

    return 0;
}
