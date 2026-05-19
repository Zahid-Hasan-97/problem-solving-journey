// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/C

#include <stdio.h>

void print_N(int N)
{
    if (N == 0){
        return;
    }

    printf("%d", N);

    if (N != 1){
        printf(" ");
    }

    print_N(N - 1);
}

int main()
{
    int N;

    scanf("%d", &N);

    print_N(N);

    return 0;
}