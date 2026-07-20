//
// Created by ayden on 21/07/2026.
//


#include <iostream>
#include <string>
#include <vector>

using namespace std;

string solution(int x, int y) {
    return x%y == 0 ? "YES" : "NO";
}

// ChatGPT generated as i needed to find a way for I/O to match codeforce requirements
int main() {
    int t;
    cin >> t;

    vector<string> answers;

    while (t--) {
        int x, y;
        cin >> x >> y;

        answers.push_back(solution(x, y));
    }

    // Print all answers after input is finished
    for (string answer : answers) {
        cout << answer << '\n';
    }

    return 0;
}
