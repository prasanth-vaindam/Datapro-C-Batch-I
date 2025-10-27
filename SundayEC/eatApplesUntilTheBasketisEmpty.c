#include<stdio.h>
int main() {
    int apples = 10; // Initial number of apples in the basket
    int eaten = 0; // Counter for eaten apples

    while (apples > 0) {
        printf("Eating an apple...\n");
        apples--; // Decrease the number of apples
        eaten++; // Increase the count of eaten apples
    }

    printf("All apples are eaten! Total eaten: %d\n", eaten);
    return 0;
}