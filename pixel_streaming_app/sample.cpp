#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool isPatternFollowed(const string& s) {
    for (int i = 0; i < s.length() - 2; ++i) {
        if (s[i + 1] != s[i] + 2 || s[i + 2] != s[i] + 1) {
            return false;
        }
    }
    return true;
}

string findOddString(const vector<string>& strings) {
    string patternString = "";
    string oddString = "";

    for (const string& s : strings) {
        if (isPatternFollowed(s)) {
            patternString = s;
        } else {
            oddString = s;
        }
    }

    return oddString;
}

int main() {
    int N;
    cin >> N;

    vector<string> strings(N);
    for (int i = 0; i < N; ++i) {
        cin >> strings[i];
    }

    string oddString = findOddString(strings);
    cout << oddString << endl;

    return 0;
}

