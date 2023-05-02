#include <stdio.h>
#include <string.h>

void fun(char ar[])
{
    // int sz = sizeof(ar) / sizeof(char);
    // printf("%d", sz);

    printf("%d", strlen(ar));
}

int main()
{
    char ar[20] = "Hello";

    fun(ar);

    return 0;
}