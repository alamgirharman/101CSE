#include <stdio.h>
int main() {
    int ftMarks[40] = {83, 86, 97, 95, 93, 
    95, 86, 52, 49, 41, 42, 47, 90, 59, 63, 86,
    40, 46, 92, 56, 51, 48, 67, 49, 42, 90, 42,
    83, 47, 95, 69, 82, 58, 58, 69, 67, 53, 56,
    71, 62
    },
    stMarks[40] = {86, 97, 95, 93, 95, 86,
    52, 49, 41, 42, 47, 90, 59, 62, 86, 40, 46,
    92, 56, 51, 48, 67, 49, 42, 90, 42, 83, 47,
    95, 69, 82, 82, 58, 69, 67, 53, 56, 71, 62,
    49
    },
    finalMarks[40] = {87, 64, 91, 43, 89,
    66, 58, 73, 99, 81, 100, 64, 55, 69, 85,
    81, 80, 67, 88, 71, 62, 78, 58, 66, 98, 75,
    86, 90, 80, 85, 100, 64, 55, 69, 85, 81, 
    80, 67, 88, 71};

    int i;
    double totalMarks[40];

    for(i = 0; i < 40; i++) {
        totalMarks[i] = ftMarks[i] / 4.0 + stMarks[i] / 4.0 + finalMarks[i] / 2.0;
    }


    for(i = 1; i <= 40; i++) {
        printf("Roll No: %d\tTotalmarks: %0.0f\n", i, totalMarks[i-1]);
    }

    return 0;
}