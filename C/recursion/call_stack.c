// Untill calling the void function will not execute

#include <stdio.h>

void one()
{
    printf("One\n"); // 8. after entering one() function it will print "one"
}

void two()
{
    printf("Two\n"); // 6. after entering two() function it will print "Two"

    one(); // 7. Then it will call one() function
}

void three()
{
    printf("Three\n"); // 4. after entering three() function it will print "Three"

    two(); // 5. Then it will call two() function
}

int main() // 1. the main function will execute 
{
    printf("Call Stack\n"); // 2. It wil print "Call Stack"

    three(); // 3. now it will call the three() function

    return 0;
}
