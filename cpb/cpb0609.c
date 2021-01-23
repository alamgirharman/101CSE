#include <stdio.h>
int main() {
    int marks, i, count;

    int totalMarks[] = {86, 78, 94, 69, 92, 78, 64, 62, 72, 61, 72, 66, 65, 65, 80, 72, 62, 68, 81, 62, 56, 68, 58, 56, 82, 71, 74, 78, 76, 84, 88, 73, 57, 66, 77, 71, 67, 65, 77, 63};

    int marksCount[101];

    for(i = 0; i < 101; i++) {
        marksCount[i] = 0;
    }
    /*
    markscount[101] = {0, 0, 0, 0, ...};

    */

    for(i = 0; i <= 40; i++) {
        marksCount[totalMarks[i]] = marksCount[totalMarks[i]] + 1;
    }

    

    for(i = 50; i <= 100; i++) {
        printf("%marks: %d Count %d\n", i, marksCount[i]);
    }
    return 0;
}