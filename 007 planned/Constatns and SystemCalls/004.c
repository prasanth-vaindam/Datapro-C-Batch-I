#include <stdio.h>

int main() {
    printf("\033[2J\033[1;1H");  // Clear screen and move cursor to top-left
    printf("Hello\n");
    return 0;
}
