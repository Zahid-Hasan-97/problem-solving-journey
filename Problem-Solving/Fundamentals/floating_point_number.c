// Statement
//         In this problem you will be given a floating point number x.You have to print x upto 3 decimal points.

//     Constraints 1.0 <= x <= 150.0

//                             Input format
//                                 Input will contain a floating point number x.

//                             Output Format
//                                 Print the number x upto 3 decimal points.


#include <stdio.h>
int main(){
    float x;
    scanf("%f", &x);
    printf("%.3f", x);
    return 0;
}