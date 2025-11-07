#include<stdio.h>
#include<stdlib.h>
int main(){
    int count = 0;
    int limit = 5;
    system("clear");
    while(count < limit){
        printf("Hello\n");
        count++;
    }

    for(count = 0; count < limit; count++){
        printf("World\n");
    }
    printf("Came out of both loops\n");

    return 0;
}