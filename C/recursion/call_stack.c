#include <stdio.h>

void one()
{
    printf("One\n");
}

void two()
{
    printf("Two\n");
}

void Three() // Untill calling the void function will not execute
{
    printf("Three");
}

int main()
{
    printf("Call Stack\n");

    one();
    two();

    return 0;
}
