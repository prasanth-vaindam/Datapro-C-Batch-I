#include<stdio.h>
int main()
{
    int count = 1; // Initialize the counter
    int limit = 10; // Set the limit for the loop

    while (count <= limit) // Loop until count reaches the limit
    {
        printf("%d\n", count); // Print the current count
        count++; // Increment the counter
    }
    // what is the value of count after the loop?
    // printf("Final count is: %d\n", count); // Print the final count 5
}