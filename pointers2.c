#include <stdio.h>
int main()
{
    double x = 5.26;
    double *ptr = &x;
    double *ptr2 = ptr;

    *ptr2 = 100.26;

    printf("%0.2lf\n", x);
    printf("%0.2lf\n", *ptr);
    printf("%0.2lf\n", ptr);
    printf("size of ptr - %d\n", sizeof(ptr));

    return 0;
}