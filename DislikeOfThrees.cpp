#include <iostream>
using namespace std;

int main() {
    int test;
    cin >> test;

    while (test--) {
        int n;
        cin >> n;

        int num = 0;
        int count = 0;

        while (count < n) {
            num++;
            if (num % 3 != 0 && num % 10 != 3) {
                count++;
            }
        }

        cout << num << endl;
    }

    return 0;
}