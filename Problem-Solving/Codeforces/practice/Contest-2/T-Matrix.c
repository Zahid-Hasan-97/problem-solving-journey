#include <stdio.h>
#include <stdlib.h>

int main(){
    int N;
    scanf("%d", &N);

    int A[N][N];

    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            scanf("%d", &A[i][j]);
        }
    }

    int primary_sum = 0;
    int secondary_sum = 0;

    for (int i = 0; i < N; i++)
    {
        primary_sum += A[i][i];

        secondary_sum += A[i][N - i - 1];
    }

    int difference = abs(primary_sum - secondary_sum);

    printf("%d", difference);

    return 0;
}