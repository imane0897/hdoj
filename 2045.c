#include <stdio.h>

int main(void)
{
    int n;
    long long a[51] = {0, 3, 6, 6};
    for (int i = 4; i < 51; i++)
    {
        a[i] = a[i - 1] + a[i - 2] * 2;
    }
    while (scanf("%d", &n) != EOF)
    {
        printf("%lld\n", a[n]);
    }
    return 0;
}