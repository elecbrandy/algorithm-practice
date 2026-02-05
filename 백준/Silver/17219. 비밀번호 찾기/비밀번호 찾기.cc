#include <iostream>
#include <map>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m = 0;
    cin >> n >> m;
    map<string, string> book;

    for (int i = 0; i < n; i++) {
        string url;
        string pw;
        cin >> url >> pw;
        book[url] = pw;
    }

    for (int i = 0; i < m; i++) {
        string url;
        cin >> url;
        cout << book[url] << '\n';
    }

    return 0;
}
