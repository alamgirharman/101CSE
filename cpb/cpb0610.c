#include <stdio.h>

int main() {
    int i, j;
    int totalMarks[] = {6, 7, 4, 6, 9, 7, 6, 2, 4, 3, 4, 1};
    int marksCount[11];

    for(i = 0; i < 11; i++) {
        marksCount[i] = 0;
    }

    for(i = 0; i < 12; i++) {
        marksCount[totalMarks[i]]++;

        for(j = 0; j <= 10; j++) {
            printf("%d ", marksCount[j]);
        }
        printf("\n");
    }
    return 0;
}