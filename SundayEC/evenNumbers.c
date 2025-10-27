#include<stdio.h>
int main(){
    int count = 1;
    int limit = 10;  // Set the limit for the loop
    while(count <= limit) // Loop until count exceeds the limit
    {
        if (count % 2 == 0) // Check if the number is even
        {
            printf("%d\n", count); // Print the even number
        }
        count++; // Increment the counter
    }
}