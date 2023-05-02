#include <stdio.h>
int main()
{

    int x = 100;
    int *ptr = &x;

    // printf("%p\n", &x);
    // printf("%p\n", ptr);
    // printf("%p", &ptr);

    // x = 200;

    *ptr = 300;

    printf("%d\n", x);
    printf("%d", *ptr);

    return 0;
}