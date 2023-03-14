#include <bits/stdc++.h>

using namespace std;

void pad_right(char a[], int n) {
    int len = strlen(a);
    if (len >= n) return;

    int num_spaces = n - len;
    for (int i = 0; i < num_spaces; i++) {
        a[len + i] = ' ';
    }
    a[n] = '\0';
}

int main() {
    char a1[] = "Hello";
    pad_right(a1, 10);
    std::cout << a1 << std::endl; // In ra "Hello     "

    char a2[] = "abcdefg";
    pad_right(a2, 3);
    std::cout << a2 << std::endl; // In ra "abcdefg"

    char a3[] = "";
    pad_right(a3, 5);
    std::cout << a3 << std::endl; // In ra "     "
}
