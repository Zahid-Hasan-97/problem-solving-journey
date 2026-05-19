// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/C

#include <stdio.h>

void print_N(int i, int N)
{
    if (i > N)
        return;
    printf("%d\n", i);

    print_N(i + 1, N);
}

int main()
{
    int N;

    scanf("%d", &N);

    print_N(1, N);

    return 0;
}