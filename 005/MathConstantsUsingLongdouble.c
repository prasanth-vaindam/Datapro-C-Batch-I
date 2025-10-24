#include<stdio.h>
#include<math.h>
int main()
{
    long double pi = M_PI;
    long double e = M_E;
    long double sqrt2 = M_SQRT2;

    printf("Value of Pi (long double): %.18Lf\n", pi);
    printf("Value of e (long double): %.18Lf\n", e);
    printf("Value of sqrt(2) (long double): %.18Lf\n", sqrt2);

    return 0;
}
