//
// Created by ayden on 21/07/2026.
//


#include <iostream>
#include <string>

using namespace std;

string solution(int watermelon) {
    // edge case: w = 2, results in 1 + 1 which are odd partitions
    if (watermelon == 2) return "NO";
    if (watermelon%2 == 0) { return "YES";}
    return "NO";
}

int main() {

    int watermelon;
    cin >> watermelon;

    cout << solution(watermelon);
}
