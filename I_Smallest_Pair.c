#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n;
        scanf("%d", &n);

        int a[n];

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }

        int ans = 1000000000;

        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                int result = a[i] + a[j] + (j - i);

                if (result < ans)
                {
                    ans = result;
                }
            }
        }

        printf("%d\n", ans);
    }

    return 0;
}