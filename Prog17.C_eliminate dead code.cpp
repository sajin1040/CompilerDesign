#include <stdio.h>

int main() {
    int x = 5;
    int y = 10;
    int z;
    if (x > y) {
        z = x + y;
    } else {
        z = x - y;
    }

    printf("Result: %d\n", z);

    return 0;
}

