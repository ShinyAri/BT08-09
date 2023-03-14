#include <iostream>
#include <cstring>

using namespace std;

void trim_left(char a[]) {
    int i = 0;
    int j = 0;
    while (a[i] == ' ') {
        i++;
    }
    while (a[i] != '\0') {
        a[j] = a[i];
        i++;
        j++;
    }
    a[j] = '\0';
}

int main() {
    char str[100];
    cout << "Enter a string: ";
    cin.getline(str, 100);
    trim_left(str);
    cout << "Trimmed string: " << str << endl;
    return 0;
}
