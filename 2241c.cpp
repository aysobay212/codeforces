//
// Created by ayden on 21/07/2026.
//


#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(string s, int len) {
    // possible invariant: alternating and of even length >- 4, it will always be 2, else 1
    if (len < 4) {
        return (s == "110" || s == "011" || s == "01" || s == "10") ? 2 : 1;
    }
    if (len%2 == 0) {
        // i guess we will applying an alternating test. if 4 characters alternate then return 2
        int alternating_length = 0;
        for (int i = 0; i < s.size() - 1; i++) {
            if (s[i] != s[i+1]) {
                alternating_length++;
            }
            else {
                alternating_length = 0;
            }
            if (alternating_length == 4) {
                return 2;
            }
        }
    }
    return 1;

}

// ChatGPT generated as i needed to find a way for I/O to match codeforce requirements
int main() {
    int t;
    cin >> t;

    vector<int> answers;

    while (t--) {
        int len;
        string s;

        cin >> len;
        cin >> s;

        answers.push_back(solution(s, len));
    }

    for (int answer : answers) {
        cout << answer << '\n';
    }

    return 0;
}
