#include <iostream>
#include <cstring>

using namespace std;

bool is_palindrome(char a[]) {
    int len = strlen(a);
    for (int i = 0; i < len/2; i++) {
        if (a[i] != a[len - i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    char str[100];
    cout << "Enter a string: ";
    cin >> str;
    if (is_palindrome(str)) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }
    return 0;
}
