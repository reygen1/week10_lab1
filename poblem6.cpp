#include <iostream>
using namespace std;

int main() {
    char lowerCase[26];
    char upperCase[26];
    char digits[10];

    for (int i = 0; i < 26; i++) {
        lowerCase[i] = 'a' + i;
        upperCase[i] = 'A' + i;
    }

    for (int i = 0; i < 10; i++) {
        digits[i] = '0' + i;
    }

    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    bool found = false;

    for (int i = 0; i < 26; i++) {
        if (ch == lowerCase[i]) {
            cout << "Lower case letter." << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        for (int i = 0; i < 26; i++) {
            if (ch == upperCase[i]) {
                cout << "Upper case letter." << endl;
                found = true;
                break;
            }
        }
    }

    if (!found) {
        for (int i = 0; i < 10; i++) {
            if (ch == digits[i]) {
                cout << "Digit." << endl;
                found = true;
                break;
            }
        }
    }

    if (!found) {
        cout << "Special symbol." << endl;
    }

    return 0;
}
