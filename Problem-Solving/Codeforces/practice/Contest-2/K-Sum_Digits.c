#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    char s[n + 1];

    scanf("%s", s);

    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum = sum + (s[i] - '0'); //ASCII vlaue of '0' is 48
    }

    printf("%d", sum);

    return 0;
}