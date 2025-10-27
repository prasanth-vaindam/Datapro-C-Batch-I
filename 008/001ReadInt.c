    #include <stdio.h>

    int main() {
        int age;
        printf("Enter your age: ");
        scanf("%d", &age); // %d for integer, &age provides the address of 'age'
        printf("You entered: %d\n", age);
        return 0;
    }