#include <iostream>
#include <string>
using namespace std;

int minStringLength(string s) {
    bool found = true;
    while (found) {
        found = false;
        size_t posAB = s.find("AB");
        if (posAB != string::npos) {
            s.erase(posAB, 2);
            found = true;
        }
        size_t posCD = s.find("CD");
        if (posCD != string::npos) {
            s.erase(posCD, 2);
            found = true;
        }
    }
    return s.length();
}

int main() {
    string s = "ABFCACDB";
    cout << "Minimum length of string: " << minStringLength(s) << endl;
    return 0;
}
