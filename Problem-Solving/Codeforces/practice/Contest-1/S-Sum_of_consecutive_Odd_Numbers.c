#include <stdio.h>

int main()
{
    int test;
    scanf("%d", &test);

    while (test--)
    {
        int x, y;
        scanf("%d %d", &x, &y);

        int start, end;

        if (x < y)
        {
            start = x;
            end = y;
        }
        else
        {
            start = y;
            end = x;
        }

        int sum = 0;

        for (int i = start + 1; i < end; i++)
        {
            if (i % 2 != 0)
            {
                sum += i;
            }
        }

        printf("%d\n", sum);
    }

    return 0;
}