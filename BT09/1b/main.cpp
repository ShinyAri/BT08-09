#include <iostream>
#include <cstring>

using namespace std;

char* delete_char(const char a[], const char c) {
    int len = strlen(a);
    int count = 0;
    for (int i = 0; i < len; i++) {
        if (a[i] == c) {
            count++;
        }
    }
    char* result = new char[len - count + 1];
    int j = 0;
    for (int i = 0; i < len; i++) {
        if (a[i] != c) {
            result[j++] = a[i];
        }
    }
    result[len - count] = '\0';
    return result;
}

int main() {
    const char str[] = "hello world";
    const char c = 'o';
    char* result_str = delete_char(str, c);
    cout << "Original string: " << str << endl;
    cout << "Character to delete: " << c << endl;
    cout << "Resulting string: " << result_str << endl;
    delete[] result_str;
    return 0;
}
