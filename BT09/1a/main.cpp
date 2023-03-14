#include <iostream>
#include <cstring>

using namespace std;

char* reverse(const char a[]) {
    int len = strlen(a);
    char* result = new char[len + 1];
    for (int i = 0; i < len; i++) {
        result[i] = a[len - i - 1];
    }
    result[len] = '\0';
    return result;
}

int main() {
    const char str[] = "hello";
    char* reversed_str = reverse(str);
    cout << "Reversed string: " << reversed_str << endl;
    delete[] reversed_str;
    return 0;
}
