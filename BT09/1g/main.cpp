#include <iostream>
#include <cstring>

using namespace std;

char* trim_left(const char* a) {
    int len = strlen(a);
    int i = 0;
    while (a[i] == ' ') {
        i++;
    }
    char* result = new char[len - i + 1];
    strncpy(result, a + i, len - i);
    result[len - i] = '\0';
    return result;
}

int main() {
    const char* a = "   Hello, world!   ";
    char* b = trim_left(a);
    cout << "Original string: " << a << endl;
    cout << "Trimmed string: " << b << endl;
    delete[] b;
    return 0;
}
