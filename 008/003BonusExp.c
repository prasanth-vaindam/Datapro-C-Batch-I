// You’ll see how each variable has a different address in memory.
#include <stdio.h>
int main() {
    int age = 20;
    float salary = 35000.50;
    printf("Value of age = %d, Address = %p\n", age, &age);
    printf("Value of salary = %.2f, Address = %p\n", salary, &salary);
    return 0;
}
