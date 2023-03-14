#include <iostream>
#include <cstring>

using namespace std;

void pad_left(char a[], int n) {
    int len = strlen(a);
    if (len >= n) {
        return;
    }
    int num_spaces = n - len;
    for (int i = len + num_spaces; i >= num_spaces; i--) {
        a[i] = a[i - num_spaces];
    }
    for (int i = 0; i < num_spaces; i++) {
        a[i] = ' ';
    }
}

int main() {
    char str[100];
    int n;
    cout << "Enter a string: ";
    cin >> str;
    cout << "Enter the length to pad: ";
    cin >> n;
    pad_left(str, n);
    cout << "Padded string: " << str << endl;
    return 0;
}
