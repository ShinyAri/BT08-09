#include <iostream>
#include <cstring>

using namespace std;

char* truncate(const char a[], int n) {
    int len = strlen(a);
    if (len <= n) {
        char* result = new char[len+1];
        strcpy(result, a);
        return result;
    }
    char* result = new char[n+1];
    strncpy(result, a, n);
    result[n] = '\0';
    return result;
}

int main() {
    char a[] = "Hello, world!";
    char* result = truncate(a, 5);
    cout << result << endl;
    delete[] result;
    return 0;
}
