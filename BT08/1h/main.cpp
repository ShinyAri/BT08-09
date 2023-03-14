#include <iostream>
#include <cstring>

using namespace std;

void trim_right(char a[]) {
    int len = strlen(a);
    int i = len - 1;
    while (i >= 0 && a[i] == ' ') {
        a[i] = '\0';
        i--;
    }
}

int main() {
    char str[100];
    cout << "Enter a string: ";
    cin.getline(str, 100);
    trim_right(str);
    cout << "Trimmed string: " << str << endl;
    return 0;
}
