#include <stdio.h>

int findMax(int ara[], int n);

int main() {
    int ara[] = {-100, 0, 53, 22, 83, 23, 89, -132, 201, 3, 85};
    int n = 11;
    int max = findMax(ara, n);
    printf("%d\n", max);
    return 0;
}

int findMax(int ara[], int n) {
    int max = ara[0];
    int i;
    for(i = 1; i < n; i++) {
        if(ara[i] > max) {
            max = ara[i];
        }
    }
    return max;
}