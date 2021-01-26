#include <stdio.h>

int main() {
    int n = 1;
    while(n <= 10) {
        printf("%d\n", n);
    }
    n++; // Warning!!! INFINITE LOOP
    return 0;
}

// Warning!!! INFINITE LOOP