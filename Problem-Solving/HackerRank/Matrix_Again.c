#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int top = 6;

    for (int i = 1; i < n; i += 2)
    {
        top++;
    }

    int star = 1;
    int space = top - 1;

    for (int i = 1; i <= top; i++)
    {
        for (int s = 1; s <= space; s++)
        {
            printf(" ");
        }

        for (int j = 1; j <= star; j++)
        {
            printf("*");
        }

        printf("\n");

        star = star + 2;
        space--;
    }

    star = star - 2;

    int middle_space = (star - n) / 2;

    for (int i = 1; i <= 5; i++)
    {
        for (int s = 1; s <= middle_space; s++)
        {
            printf(" ");
        }

        for (int j = 1; j <= n; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}