#include <stdio.h>
#include <stdlib.h>

int main() {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif

    printf("Hello Students!\n");
    return 0;
}
