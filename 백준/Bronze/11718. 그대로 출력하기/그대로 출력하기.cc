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

    // vector<string> result;
    
    for (int i = 0; i < 100; i++) {
        string input;
        getline(cin, input);
        cout << input << '\n';
    }

    return 0;
}