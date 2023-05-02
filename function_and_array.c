#include <stdio.h>

void fun(double ar[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%0.2lf ", ar[i]);
    }
}

int main()
{
    double ar[5] = {10.2, 20.5, 30.5, 40.5, 50.5};
    fun(ar, 5);
    return 0;
}