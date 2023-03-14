#include <iostream>
#include <cstring>

using namespace std;

char* pad_left(const char a[], int n) {
    int len = strlen(a);
    if (len >= n) {
        char* result = new char[len + 1];
        strcpy(result, a);
        return result;
    }
    char* result = new char[n + 1];
    int diff = n - len;
    for (int i = 0; i < diff; i++) {
        result[i] = ' ';
    }
    strcpy(result + diff, a);
    return result;
}

int main() {
    const char str[] = "hello";
    int n = 10;
    char* padded_str = pad_left(str, n);
    cout << "Padded string: " << padded_str << endl;
    delete[] padded_str;
    return 0;
}
