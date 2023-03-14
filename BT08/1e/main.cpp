#include <iostream>
#include <cstring>

using namespace std;

void truncate(char a[], int n) {
    int len = strlen(a);
    if (len <= n) {
        return;
    }
    a[n] = '\0';
}

int main() {
    char str[100];
    int n;
    cout << "Enter a string: ";
    cin >> str;
    cout << "Enter the length to truncate: ";
    cin >> n;
    truncate(str, n);
    cout << "Truncated string: " << str << endl;
    return 0;
}
