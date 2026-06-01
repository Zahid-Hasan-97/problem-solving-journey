#include <stdio.h>

int main(){
    int T;
    scanf("%d", &T);

    while (T--){
        long long M;
        long A, B, C;

        scanf("%lld %ld %ld %ld", &M, &A, &B, &C);

        long multiplication = A * B * C;

        if (M == 0)
        {
            printf("0\n");
        }
        else if (M % multiplication == 0)
        {
            printf("%lld\n", M / multiplication);
        }
        else
        {
            printf("-1\n");
        }
    }

    return 0;
}