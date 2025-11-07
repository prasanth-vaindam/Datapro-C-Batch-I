#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
    printf("=== Integer Types ===\n");
    printf("short int range: %d to %d\n", SHRT_MIN, SHRT_MAX);
    printf("int range: %d to %d\n", INT_MIN, INT_MAX);
    printf("long int range: %ld to %ld\n", LONG_MIN, LONG_MAX);
    printf("long long int range: %lld to %lld\n", LLONG_MIN, LLONG_MAX);

    printf("\n=== Floating Point Types ===\n");
    printf("double precision: %.10e to %.10e\n", DBL_MIN, DBL_MAX);
    printf("long double precision: %.10Le to %.10Le\n", LDBL_MIN, LDBL_MAX);

    return 0;
}
