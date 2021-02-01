#include <stdio.h>

int main() {
    char ch = 'a';

    if(ch <= 'z' && ch >= 'a') {
        ch = 'A' + (ch - 'a');
        printf("%c\n", ch);
    }

    

    
    return 0;
}