#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

struct Person {
    int age;
    int level;
    string name;
    
    Person(int age, int level, string name) : age(age), level(level), name(name) {}
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<Person> v;
    int     n;
    
    cin >> n;

    for (int i = 0; i < n; i++) {
        int age;
        string name;
        cin >> age >> name;
        v.push_back(Person(age, i, name));
    }

    sort(v.begin(), v.end(), [](const Person& a, const Person& b){
        if (a.age != b.age)
            return a.age < b.age;
        return a.level < b. level;
    });

    for (const auto &p :v) {
        // cout << p.age << ' ' <<  p.level << ' ' << p.name << '\n';
        cout << p.age << ' ' << p.name << '\n';
    }

    return 0;
}