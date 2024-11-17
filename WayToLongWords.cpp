#include <iostream>
#include <string>
using namespace std;

int main() {
    int num;       
    cin >> num;

    while (num--) {
        string w;   
        cin >> w;

        if (w.size() <= 10) {
            cout << w << endl;  
        } else {
            int cnt = w.size() - 2; 
            cout << w[0] << cnt << w[w.size() - 1] << endl; 
        }
    }

    return 0;
}