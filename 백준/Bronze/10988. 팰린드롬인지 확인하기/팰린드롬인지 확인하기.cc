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

    string input;
    cin >> input;
    
    int start = 0;
    int end = input.length() - 1;
    
    while (start < end) {
        if (input[start] != input[end]) {
            cout << '0';
            return 0;
        }
        start++;
        end--;
    }
    cout << '1';
    return 0;
}
