#include <stdio.h>

int main() {
    int i;
    printf("Extended ASCII Table (0 - 255):\n");
    printf("Value\tCharacter\n");
    for(i = 0; i < 256; i++) {
        printf("%3d\t%c\n", i, i);
    }
    return 0;
}
