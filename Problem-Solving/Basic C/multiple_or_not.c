// Statement
//     In this problem you will be given two integers a and b,
//     you have to tell if one is the multiple of other.(a is the multiple of b or b is the multiple of a).

//         Constraints 1 <= a,
//     b <= 10000 Input format
//         Input will contain two integers a,
//     b.Output Format
//     Print "Yes" if one is the multiple of the other and "No" otherwise.

#include <stdio.h>
int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    if(a % b == 0 || b % a == 0){
        printf("Yes");
    } else {
        printf("No");
    }
    return 0;
}