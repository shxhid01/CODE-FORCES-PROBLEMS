#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>

using namespace std;

int main() {
    int Lcnt = 0, Ucnt = 0;
    string s;

    cin >> s;

    for (char c : s) {
        if (isupper(c)) {
            Ucnt++;
        } else if (islower(c)) {
            Lcnt++;
        }
    }

    if (Ucnt > Lcnt) {
        transform(s.begin(), s.end(), s.begin(), [](unsigned char c) { return toupper(c); });
    } else {
        transform(s.begin(), s.end(), s.begin(), [](unsigned char c) { return tolower(c); });
    }

    cout << s << endl;

    return 0;
}
