#include <iostream>
#include <cstring>

using namespace std;

void reverse(char a[]) {
    int len = strlen(a);
    for (int i = 0; i < len / 2; i++) {
        char temp = a[i];
        a[i] = a[len - i - 1];
        a[len - i - 1] = temp;
    }
}

int main() {
    char a[] = "hello world";
    cout << "Original string: " << a << endl;
    reverse(a);
    cout << "Reversed string: " << a << endl;
    return 0;
}
