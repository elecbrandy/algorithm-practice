#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string  input;
    int     n;

    cin >> input;
    cin >> n;
    cout << input[n-1];
    return 0;
}