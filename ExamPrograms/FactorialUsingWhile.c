// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int i = 1;
    int n = 5;
    int product = 1;
    
    while(i <= n)
    {
        // printf("%d\n", i);
        product = product * i;
        i++;
    }
    printf("The Factorial of %d is %d\n",n, product);
    
    // for(i = 1 ; i <= n; i++)
    // {
        
    // }

    return 0;
}