#include <iostream>
#include <cstring>

using namespace std;

char* pad_right(const char a[], int n) {
    int len = strlen(a);
    if (len >= n) {
        return strdup(a);
    }
    char* result = new char[n + 1];
    strcpy(result, a);
    for (int i = len; i < n; ++i) {
        result[i] = ' ';
    }
    result[n] = '\0';
    return result;
}

int main() {
    const char a[] = "hello";
    int n = 10;
    char* padded = pad_right(a, n);
    cout << padded << endl;
    delete[] padded;
    return 0;
}
