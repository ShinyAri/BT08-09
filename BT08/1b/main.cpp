#include <iostream>
#include <cstring>

using namespace std;

void delete_char(char a[], char c) {
    int len = strlen(a);
    int j = 0;
    for (int i = 0; i < len; i++) {
        if (a[i] != c) {
            a[j] = a[i];
            j++;
        }
    }
    a[j] = '\0';
}

int main() {
    char a1[] = "Hello World!";
    delete_char(a1, 'l');
    std::cout << a1 << std::endl; // In ra "Heo Word!"

    char a2[] = "abcdefg";
    delete_char(a2, 'a');
    std::cout << a2 << std::endl; // In ra "bcdefg"

    char a3[] = "aaa";
    delete_char(a3, 'a');
    std::cout << a3 << std::endl; // In ra ""
}
