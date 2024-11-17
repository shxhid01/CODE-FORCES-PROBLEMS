
#include <iostream>
#include <vector>
using namespace std;
int main() {
    int test;
    std::cin >> test;

    while (test--) {
        int n;
        cin >> n;
        vector<int> vec(n);
        vector<int> seen(n + 1, 0);

        for (int i = 0; i < n; ++i) {
            cin >> vec[i];
            seen[vec[i]]++;
        }
        int score = 0;

        for (int i = 1; i <= n; ++i) {
            score += seen[i] / 2; 
        }

        cout << score << endl; 
    }

    return 0;
}
/*
Code force contest
Codeforces Round 988 (Div. 3)
only could do the first question
Test Cases
input:
5
1
1
2
2 2
2
1 2
4
1 2 3 1
6
1 2 3 1 2 3
output:
0
1
0
1
3
*/