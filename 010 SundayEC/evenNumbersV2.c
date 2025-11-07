#include<stdio.h>
int main(){
    int count = 0;
    int limit = 11; // Set the limit for the loop
    while(count < limit) // Loop until count reaches the limit
    {
         // Print the current count
        count = count + 2; // Increment the counter
        printf("%d\n", count);
    }
}