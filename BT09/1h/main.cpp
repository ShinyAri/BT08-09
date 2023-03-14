#include <iostream>
#include <cstring>

using namespace std;

char* trim_right(const char* a) {
    int n = strlen(a);
    while (n > 0 && isspace(a[n-1])) {
        n--;
    }
    char* result = new char[n+1];
    strncpy(result, a, n);
    result[n] = '\0';
    return result;
}

int main() {
    char a[] = "   hello world    ";
    char* result = trim_right(a);
    cout << "Trimmed string: \"" << result << "\"" << endl;
    delete[] result; // remember to deallocate memory
    return 0;
}
