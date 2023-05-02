#include <stdio.h>
int main()
{
    int ar[5] = {10, 20, 30, 40, 50};
    // printf("0 number index er address %p\n", &ar[0]);
    // printf("0 number index er address %p\n", ar);

    // printf("0 number index er value %d\n", ar[0]);
    // printf("0 number index er value %d\n", *ar);

    // printf("1 number index er value %d\n", ar[1]);
    // printf("1 number index er value %d\n", *(ar + 1));

    printf("%d\n", *(ar + 1));
    printf("%d\n", *(1 + ar));
    printf("%d\n", ar[1]);
    printf("%d\n", 1 [ar]);

    return 0;
}