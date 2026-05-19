
#include <stdio.h>

void print_recursion(int N)
{
    if (N == 0)
    {
        return;
    }

    printf("I love Recursion\n");

    print_recursion(N - 1);
}

int main()
{
    int N;
    scanf("%d", &N);

    print_recursion(N);

    return 0;
}