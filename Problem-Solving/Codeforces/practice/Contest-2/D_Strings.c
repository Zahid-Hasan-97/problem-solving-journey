// #include <stdio.h>

// int main()
// {
//     char a[11], b[11];

//     scanf("%s %s", a, b);

//     int count_a = 0;

//     for (int i = 0; a[i] != '\0'; i++)
//     {
//         count_a++;
//     }

//     int count_b = 0;

//     for (int i = 0; b[i] != '\0'; i++)
//     {
//         count_b++;
//     }

//     printf("%d %d\n", count_a, count_b);

//     printf("%s%s\n", a, b);

//     char temp = a[0];
//     a[0] = b[0];
//     b[0] = temp;

//     printf("%s %s\n", a, b);

//     return 0;
// }

#include <stdio.h>
#include <string.h>

int main()
{
    char a[11], b[11];

    scanf("%s", a);
    scanf("%s", b);

    printf("%d %d\n", strlen(a), strlen(b));

    printf("%s%s\n", a, b);

    char temp = a[0];
    a[0] = b[0];
    b[0] = temp;

    printf("%s %s\n", a, b);

    return 0;
}