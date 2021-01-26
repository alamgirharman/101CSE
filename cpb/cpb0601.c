#include <stdio.h>

int main() {
    int ftMarks, stMarks, finalMarks;
    double totalMarks;

    ftMarks = 80;
    stMarks = 74;
    finalMarks = 97;

    totalMarks = ftMarks / 4.0 + stMarks / 4.0 + finalMarks / 2.0;
    printf("%0.0lf\n", totalMarks);
    return 0;
}