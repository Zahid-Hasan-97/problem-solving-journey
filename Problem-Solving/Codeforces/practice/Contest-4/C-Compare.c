#include <stdio.h>
#include <string.h>

int main()
{
    char x[21], y[21];

    scanf("%s %s", x, y);

    int compare = strcmp(x, y);

    if (compare < 0)
    {
        printf("%s", x);
    }
    else
    {
        printf("%s", y);
    }

    return 0;
}