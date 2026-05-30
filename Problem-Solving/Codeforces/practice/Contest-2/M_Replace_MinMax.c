#include <stdio.h>
#include <limits.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a[n];

    for(int i = 0 ; i< n; i++){
        scanf("%d", &a[i]);
    }

    int min = INT_MAX;
    int min_index = -1;
    for(int i = 0; i<n; i++){
        if(a[i] < min){
            min = a[i];
            min_index = i;
        }
    }

    int max = INT_MIN;
    int max_index = -1;
    for(int i = 0; i<n; i++){
        if(a[i] > max){
            max = a[i];
            max_index = i;
        }
    }

    a[min_index] = max;
    a[max_index] = min; 

    for(int i=0; i<n; i++){
        printf("%d ", a[i]);
    }

    return 0;
}