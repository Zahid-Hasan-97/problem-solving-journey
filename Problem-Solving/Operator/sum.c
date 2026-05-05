// Statement
//             Take two integers A and B as input and output their summation.

//         Constraints -
//         10 ^
//     9 <= A,
//     B <= 10 ^ 9 Input format - You will be given A and B separated by a space.

//                                Output Format
//                                    Output their summation

#include <stdio.h>
int main(){
    int A, B;
    scanf("%d %d", &A, &B);
    int sum = A + B;
    printf("%d", sum);

    return 0;
}