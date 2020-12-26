#include <stdio.h>

int main(void) {
    float plankLength = 10.0f;
    float piceCount = 4.0f;
    float pieceLength = 0.0f;
    pieceLength = plankLength / piceCount;
    printf("A plank %f feet long can be cut into %f pieces %f feet long.\n", plankLength, piceCount, pieceLength);
    return 0;
}